#include "gfx.hpp"
#include "common.hpp"
#include "app.hpp"

extern C2D_SpriteSheet sprites;
void GFX::DrawTop(){
    Gui::ScreenDraw(Top);
    Gui::DrawSprite(sprites, 1, 0, 0, 1.0f, 1.0f);
    //Gui::Draw_Rect(0, 0, 400, 240, C2D_Color32(0, 100, 255, 255));
}
void GFX::DrawBottom(){
    Gui::ScreenDraw(Bottom);
}