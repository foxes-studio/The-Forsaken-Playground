#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include "deplacement.h"

int main()
{
SDL_Surface *ecran=NULL;
SDL_Surface *image=NULL;
int continuer=1;
SDL_Rect position;
position.x=0;
position.y=0;
SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(1920, 1080, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Chargement Backgroung", NULL);  
image = IMG_Load("Mario_Run.png");

while(continuer==1)
{
SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));

deplacement(ecran,image , continuer, position);

SDL_Flip(ecran);
}



SDL_FreeSurface(image);
 SDL_Quit();

    return EXIT_SUCCESS;
}
