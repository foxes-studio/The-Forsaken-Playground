#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "animation.h"
#include "scrolling.h"
#include "Collisions.h"
 #include <stdbool.h>

void setrects(SDL_Rect* clip) 
{
clip[0].x=0;
clip[0].y=0;
clip[0].w=78;
clip[0].h=117;

clip[1].x=78;
clip[1].y=0;
clip[1].w=78;
clip[1].h=117;

clip[2].x=156;
clip[2].y=0;
clip[2].w=78;
clip[2].h=117;

clip[3].x=234;
clip[3].y=0;
clip[3].w=78;
clip[3].h=117;

clip[4].x=312;
clip[4].y=0;
clip[4].w=78;
clip[4].h=117;

}

void animate(SDL_Surface *screen , SDL_Surface *sprite ,SDL_Surface *sprite2,SDL_Surface *sprite3,  SDL_Surface *Background , SDL_Rect positionFond , int running)
{
SDL_Surface *Level=NULL ; 
int frame=0 ; 
SDL_Rect rect , rects[5] , dst , rect1 ,pos ; 
int n ; 


dst.x=0 ; 
dst.y=0 ;
dst.h=720 ; 
dst.w=1280 ; 

rect.x=93;
rect.y=535;

pos.x=1626;
pos.y=535;

sprite = IMG_Load("sprite.png") ;

sprite2 = IMG_Load("sprite2.png") ; 
sprite3 = IMG_Load("sprite3.png") ; 
setrects(rects); 

while(running)
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
rect.x+= 5 ; 
               if  ( rect.x<=3840)
       
            positionFond.x += 5;
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ;  
SDL_BlitSurface(sprite2,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
SDL_Delay(150) ; 
frame++;
if(frame==5){
frame=0;
}
break ;
case SDLK_LEFT : 
 rect.x-= 5 ; 
               if  ( rect.x>=0)
       
            positionFond.x -= 5;
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 
SDL_BlitSurface(sprite,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
SDL_Delay(150) ; 
frame++;
if(frame==5){
frame=0;
}
break ;

case SDLK_a : 


SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 
SDL_BlitSurface(sprite3,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
SDL_Delay(150) ; 
frame++;
if(frame==5){
frame=0;
}
break ;
}

						}
					}
n=CollisionBB(rect,pos) ; 
if (n==1)
{
rect.x-= 550 ; 
positionFond.x+=500 ;        

SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 
frame=0 ; 
SDL_BlitSurface(sprite2,&rects[frame],screen,&rect);
SDL_Flip(screen) ;	
}

}
}
