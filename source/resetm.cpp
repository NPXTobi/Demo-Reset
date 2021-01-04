#include "resetm.hpp"

extern bool touching(touchPosition touch, Structs::ButtonPos button);
extern bool exiting;

void ResetMenu::Draw(void) const {
    GFX::DrawTop();
}
void MainMenu::Logic(u32 hDown, u32 hHeld, touchPosition touch) {



	if (hDown & KEY_START) {
		fadecolor = 0;
		fadeout = true;
		exiting = true;
	}
}
