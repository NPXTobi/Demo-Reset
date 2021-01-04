#include "gfx.hpp"

void GFX::DrawTop(){
    Gui::ScreenDraw(Top);
    Gui::Draw_Rect(0, 0, 400, 240, C2D_Color32(0, 100, 255, 255));
}
void GFX::DrawBottom(){
    Gui::ScreenDraw(Bottom);
}