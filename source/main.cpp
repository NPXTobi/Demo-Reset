//#include <m3dia.hpp>
#include <Init.hpp>
#include "functions.hpp"

int main() {
 // initialize not everything
   /* m3d::Applet app;
    m3d::Screen scr;
    m3d::Sprite bgrtop("romfs:/gfx/sprites.t3x", 1);
    m3d::Sprite bgrbo("romfs:/gfx/sprites.t3x", 2);
    m3d::Text about("   Demo-Reset by Npx-I7/Tobi\n\n\n          Press A to reset.\n          Press Start to exit.");
    //consoleInit(GFX_BOTTOM, NULL);
   m3d::LEDPattern green(m3d::Color(0, 255, 0));
   m3d::LEDPattern red(m3d::Color(255 , 0, 0));
   m3d::Text lred("If the LED is red, there \nwas an Error.");
   m3d::Text lgreen("\n\nIf the LED is green, it's \nall done!");
   lred.setColor(m3d::Color(255, 0, 0));
   lgreen.setColor(m3d::Color(0, 255, 0));*/

    Init();

    

    // main loop
   /* while (app.isRunning()) {
        // press B to return to the homebrew menu
       
        if (m3d::buttons::buttonPressed(m3d::buttons::Button::Start))
        {
        	app.exit();
        }
        if (m3d::buttons::buttonPressed(m3d::buttons::Button::L))
        {
      
        }
        if (m3d::buttons::buttonPressed(m3d::buttons::Button::R))
        {
        
        }
        if (m3d::buttons::buttonPressed(m3d::buttons::Button::A)){
         if(AMnet()){
		printf("\n Got am:net handle.");
		amInit();
		Reset1();
      green.play();


     
	} else {
		printf("\n Failed to get am:net handle, did you patch svc?");
      red.play();

	}
        
        }*/
      
       
        
      /*  scr.drawTop(bgrtop); // draw the sprite
        scr.drawTop(about);
        scr.drawBottom(bgrbo);
        scr.drawBottom(lred);
        scr.drawBottom(lgreen);
        scr.render(); // render the screen*/
   // }
    
    if(AMnet()){
		printf("\n Got am:net handle.");
		amInit();
		Reset1();
    }

    return 0;
}
