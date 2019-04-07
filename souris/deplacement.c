#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include "deplacement.h"
void animated(SDL_Surface *screen ,  SDL_Surface *Background ,SDL_Surface *image2, SDL_Rect *positionFond  , int *running)
{
SDL_Rect rect ;
rect.x=0;
rect.y=535;
rect.h=117 ; 
rect.w=78 ;
 SDL_BlitSurface(Background ,positionFond,screen,NULL);
SDL_Flip(screen) ; 
while(*running){
SDL_Event Event;
         SDL_WaitEvent(&Event);
        switch(Event.type)
        {
 /*case SDL_QUIT:
         continuer = 0;
         break;*/

         case SDL_MOUSEBUTTONUP:
             if(Event.button.button==SDL_BUTTON_LEFT)
              {
               rect.x= Event.button.x-513;
             if (rect.x>=960)
{
 positionFond->x+=960;
rect.x=0;
}
else if ( rect.x<=0 )
{
 positionFond->x-=960;
rect.x=960-rect.x ; 

}
SDL_BlitSurface(Background,positionFond,screen,NULL); 
SDL_BlitSurface(image2,NULL, screen, &rect);
SDL_Flip(screen) ;
              }
              else if (Event.button.button==SDL_BUTTON_RIGHT)
             *running=0;


            break ;
          }
}
}









    
   

