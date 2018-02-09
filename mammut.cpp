#include <mammut.h>
#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <funktionen.h>
#include <iostream>

using namespace std;

//Funktionen des Mammuts

mammut::mammut(int xstart, int ystart, int vstart, bool losrennen, SDL_Renderer *renderer){
    xmammut = xstart;
    ymammut = ystart;
    vmammut = vstart;
    losrennen = false;
    bildmammut = texture_laden(renderer,"bilder/mammut/mammut.png");
}
void mammut::los(){
    losrennen = true;
    cout<<"los los"<<endl;
};

void mammut::bewegen(){
    if(losrennen==true){
        xmammut=xmammut+vmammut;
        ymammut=ymammut;
        cout<<"endlich"<<endl;
    }
};

void mammut::zeichnen(SDL_Renderer *renderer){
    SDL_RenderCopyEx(renderer,bildmammut,NULL,&rechteck, NULL,NULL,SDL_FLIP_NONE);
    cout<<"da issa"<<endl;

};
