#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>

 void Show_Object (SDL_Surface *Object , SDL_Surface *screen , SDL_Rect Rect  ) 
  {

	 SDL_BlitSurface(Object, NULL, screen, &Rect);
     SDL_Flip(screen);
 }
