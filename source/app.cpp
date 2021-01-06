#include "app.hpp"
#include "common.hpp"
#include "resetm.hpp"

#include <algorithm>
#include <dirent.h>
#include <unistd.h>
#include <iostream>
#include <vector>

bool exiting = false;

C2D_SpriteSheet sprites;

// If button Position pressed -> Do something.
bool touching(touchPosition touch, Structs::ButtonPos button) {
	if (touch.px >= button.x && touch.px <= (button.x + button.w) && touch.py >= button.y && touch.py <= (button.y + button.h))	return true;
	else	return false;
}

Result app::Initialize(){
    fadealpha = 255;
	fadein = true;

	gfxInitDefault();
	romfsInit();
	Gui::init();
	Gui::loadSheet("romfs:/gfx/sprites.t3x", sprites);
	cfguInit();
	//mcuInit();
	osSetSpeedupEnable(true);
	acInit();
	amInit();
	Gui::setScreen(std::make_unique<ResetMenu>(), false, false); // Set the screen initially as Stack Screen.
   
	return 0;
}
Result app::MainLoop(){
    app::Initialize();

	// Loop as long as the status is not exiting.
	while (aptMainLoop()) {
		// Scan the input.
		hidScanInput();
		u32 hDown = hidKeysDown();
		u32 hHeld = hidKeysHeld();
		touchPosition touch;
		hidTouchRead(&touch);

		Gui::clearTextBufs(); // Clear Text Buffer before.
		C2D_TargetClear(Top, C2D_Color32(0, 0, 0, 0));
		C2D_TargetClear(Bottom, C2D_Color32(0, 0, 0, 0));

		// Screen Logic & Draw.
		C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
		Gui::DrawScreen(false);
		Gui::ScreenLogic(hDown, hHeld, touch, true, false);
		C3D_FrameEnd(0);
		if (exiting) {
			if (!fadeout)	break;
		}

		// Call the fade effects here. :D
		Gui::fadeEffects(6, 6, false);
	}
	// Exit all services and exit the app.
	app::Exit();
        aptSetSleepAllowed(true);
	return 0;
}
Result app::Exit(){
    Gui::exit();
	Gui::unloadSheet(sprites);
	gfxExit();
	cfguExit();
	//mcuExit();
	romfsExit();
	return 0;
}