#include <iostream>
#include <SDL/SDL.h>
#define HAUTEUR 55
#define LARGEUR 200
int main ( int argc, char** argv )
{
   SDL_Init (SDL_INIT_VIDEO | SDL_INIT_TIMER);
   SDL_Event event;
   SDL_Surface *ecran = NULL;
   SDL_Rect position;
   positionBoutton.x = 150;
   positionBoutton.y = 200;
   SDL_Surface *boutton = NULL;
   boutton = SDL_LoadBMP ("boutton.bmp");
   int continuer = 1;
ecran = SDL_SetVideoMode (500,500,32,SDL_HWSURFACE);
SDL_BlitSurface (boutton,NULL,ecran, &positionBoutton);
SDL_Flip (ecran);
while (continuer)
    {
     SDL_WaitEvent(&event);
        switch(event.type)
        {
           case SDL_QUIT:
            continuer = 0;
            break;
            case SDL_MOUSEBUTTONUP:
              if (   event.button.y > 200
                  && event.button.y <= 200+HAUTEUR  
                  && event.button.x > 150
                  && event.button.x <= 150+LARGEUR )
           
            break;
        }
    }
}
