
#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdbool.h>

 bool CollisionTrigoInsc ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect Player_position , SDL_Rect Object_position )
 
 {
	 
	 if ( (position1.x+(position1.w/2))-(position.x+(position.w/2)) <= (position.w/2)+(position1.w/2) && (position.x <= position1.x+position1.w ) && (position.y+position.h > position1.y ) )
     {
		 return true ; 
	 }
   else return false ; 
	 
}

