#include "gfx.hpp"
#include "common.hpp"
#include "app.hpp"

extern C2D_SpriteSheet sprites;
void GFX::DrawTop(){
    Gui::ScreenDraw(Top);
    Gui::DrawSprite(sprites, 1, 0, 0, 1.0f, 1.0f);
}
void GFX::DrawBottom(){
    Gui::ScreenDraw(Bottom);
    Gui::DrawSprite(sprites, 2, 0, 0, 1.0f, 1.0f);
}