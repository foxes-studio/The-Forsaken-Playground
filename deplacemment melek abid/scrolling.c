#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "deplacement.h"

void animate(SDL_Surface *screen ,  SDL_Surface *Background ,SDL_Surface *image2, SDL_Rect *positionFond  , int *running)
{

SDL_Rect rect ;
rect.x=0;
rect.y=535;
rect.h=117 ; 
rect.w=78 ; 

 SDL_BlitSurface(Background ,positionFond,screen,NULL);
SDL_Flip(screen) ; 


//setrects(rects,78,117,5); 
SDL_EnableKeyRepeat(1,1) ; 
while(*running)
{
                SDL_Event event;
                while(SDL_PollEvent(&event)) {
                        switch(event.type) {
                                case SDL_QUIT:
                                        running = 0;

                                        break;


     case SDL_KEYDOWN:

        switch(event.key.keysym.sym)

        {
      case SDLK_ESCAPE : 
running=0 ;  
break ; 
case SDLK_RIGHT :


 rect.x+=10; 
 
 if (rect.x>=1520)
{
/* if(positionFond->x==4920)
{
rect.x+=10;
}*/
 positionFond->x+=1520;
rect.x=0;
}
else if(positionFond->x==4400)
{
rect.x+=10;
}

SDL_BlitSurface(Background,positionFond,screen,NULL); 
SDL_BlitSurface(image2,NULL, screen, &rect);
SDL_Flip(screen) ;  
break ;
case SDLK_LEFT : 
 rect.x-=10 ; 
if ( rect.x==0 )
{
 positionFond->x-=1520;
rect.x=1520-rect.x ; 

}
else if(positionFond->x==1520 ) 
rect.x-= 10; 



SDL_BlitSurface(Background,positionFond,screen,NULL);
SDL_BlitSurface(image2,NULL, screen, &rect);
SDL_Flip(screen) ; 

    
break ;

}
}
}
}
}

