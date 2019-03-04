 
#include <stdio.h>
#include  <stdlib.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
 #include <stdbool.h>
 #include <math.h>
 
 bool CollisionTrigoCir ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect Pposition , SDL_Rect Oposition )
 {
	 int r1,r2 ; //Rayons du cercle 
	 
	       r1=(sqrt(pow(Pposition.h,2)+pow(Pposition.w,2)))/2     ;
      r2=(sqrt(pow(Oposition.h,2)+pow(Oposition.w,2)))/2 ;
	 
 if   ( (Oposition.x+(Oposition.w/2))-(Pposition.x+(Pposition.w/2)) <= r1 + r2 && (Pposition.x <= Oposition.x+(Oposition.w/2)+r2 ) && (Pposition.y+Pposition.h > ((Oposition.y+(Oposition.h/2)) - r2 ) ) )
     {
		 return true ; //Collision faite
	 }
   else return false ; 
	 
	 
 }
