#include "resetm.hpp"

extern bool touching(touchPosition touch, Structs::ButtonPos button);
extern bool exiting;

void ResetMenu::Draw(void) const {
    GFX::DrawTop();
	Gui::DrawString(10, 01, 1.0f, C2D_Color32(255, 255, 255, 255), "App Works!");
}
void ResetMenu::Logic(u32 hDown, u32 hHeld, touchPosition touch) {



	if (hDown & KEY_START) {
		fadecolor = 0;
		fadeout = true;
		exiting = true;
	}
}
