#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "game.h"
 #include <stdbool.h>


void setrects(SDL_Rect* clip , int LI , int HI , int frames ) 
{
int i ; 

clip[0].x=0 ;
clip[0].y=0;
clip[0].w=LI;
clip[0].h=HI; 
for (i=1;i<frames;i++) 
{
clip[i].x=clip[i-1].x+LI;
clip[i].y=0;
clip[i].w=LI;
clip[i].h=HI;
}
}


void animate(SDL_Surface *screen , SDL_Surface *sprite ,SDL_Surface *sprite2,SDL_Surface *sprite3,  SDL_Surface *Background , SDL_Rect positionFond , int running)
{
SDL_Surface *Level=NULL , *t=NULL  , *screen1 ; 
int frame=0 , frame1=0; 
SDL_Rect rect , rects[4] , dst , rect1 ,pos , perso , p  ; 
int n , positionini=0 , c ;
int run , r , alea=0 , s , sol;
char image [30] ;   
object obj , obj1 , obj2 , obj3 ; 
ent E ;  
enigme  e;

    srand(time(NULL));

init_enigme(&e) ; 

initialiserObj(&obj,"F.png",350,571) ; 
initialiserObj(&obj1,"F.png",450,571) ;
initialiserObj(&obj2,"F.png",1630,571) ; 
initialiserObj(&obj3,"F.png",300,571) ; 


p.x=200 ; 
p.y=0 ;
p.h=720 ; 


dst.x=0 ; 
dst.y=535 ;
dst.h=117 ; 
dst.w=78 ; 

rect.x=0;
rect.y=535;
rect.h=117 ; 
rect.w=78 ; 

pos.x=300;
pos.y=500;
pos.h=220 ; 
pos.w=100 ; 


sprite = IMG_Load("sprite.png") ;

sprite2 = IMG_Load("sprite2.png") ; 
sprite3 = IMG_Load("sprite3.png") ; 
setrects(rects,78,117,5); 
SDL_EnableKeyRepeat(1,1) ; 
while(running)
{
	    run=1,r=0 ;
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


rect.x+=5 ; 
 
 if ( rect.x==640 )
{
 positionFond.x+=640 ;
 rect.x=0 ; 
}
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ;  

affichageObj(obj,Background) ; 


SDL_BlitSurface(sprite2,&rects[frame],screen,&rect);
SDL_Flip(screen) ;

SDL_Delay(150) ; 
frame++;
if(frame==5){
frame=0;
}
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}


break ;
case SDLK_LEFT : 
 
               if  ( positionFond.x>=0)
       
            positionFond.x -= 5;
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

affichageObj(obj,Background) ; 
SDL_BlitSurface(sprite,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
 SDL_Delay(150) ;
frame++;
if(frame==5){
frame=0;
}
    
break ;

}


c=CollisionTrigoCir(dst,obj.position) ;
if (c)
{
      generate_afficher ( screen , image ,&e,&alea) ;
	        

      s=solution_e (image);
			
do{
			r=resolution (&run,&running);


			}while((r>3 || r<1)&&run!=0) ;
	
	sol=afficher_resultat (screen,s,r,&e) ;		

if (sol)
{
rect.x+=300 ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

affichageObj(obj,Background) ; 
SDL_BlitSurface(sprite2,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
 SDL_Delay(150) ;
frame++;
if(frame==5){
frame=0;
}

}
else 
{run=0 ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

affichageObj(obj,Background) ; 
SDL_BlitSurface(sprite2,&rects[frame],screen,&rect);
SDL_Flip(screen) ;
 SDL_Delay(150) ;
frame++;
if(frame==5){
frame=0;
}
}



if (obj3.position.x<600) 
{

obj3.position.x+=50 ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 



						}




					}







}


}



}


}





