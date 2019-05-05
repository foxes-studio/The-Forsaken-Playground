
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#define HAUTEUR 55
#define LARGEUR 200
int main ( int argc, char** argv )
{
SDL_Rect positionBoutton;
   SDL_Init (SDL_INIT_VIDEO | SDL_INIT_TIMER);
   SDL_Event event;
   SDL_Surface *ecran = NULL;
   SDL_Rect position;
   positionBoutton.x = 0;
   positionBoutton.y = 0;
   SDL_Surface *boutton = NULL;
   boutton = IMG_Load("buttons.png");
   int continuer = 1;
ecran = SDL_SetVideoMode (350,350,32,SDL_HWSURFACE);
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
