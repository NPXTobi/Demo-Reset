#include "msg.hpp"

void MSG::Display(std::string text) {
	Gui::clearTextBufs();
	C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
	C2D_TargetClear(Top, C2D_Color32(0, 0, 0, 0));
	C2D_TargetClear(Bottom, C2D_Color32(0, 0, 0, 0));

	GFX::DrawTop();
	Gui::DrawStringCentered(0, 1, 0.6f, C2D_Color32(255, 255, 255, 255), text, 400);

	GFX::DrawBottom();
	C3D_FrameEnd(0);

	for (int i = 0; i < 60 * 3; i++) {
		gspWaitForVBlank();
	}
}