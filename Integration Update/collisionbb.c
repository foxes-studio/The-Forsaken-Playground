#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "game.h"

int collisionbb( SDL_Rect posj , SDL_Rect posobj )
{
 int x ; 
if ( (posj.x+posj.w>=posobj.x)&&(posj.x<=posobj.x+posobj.w) )
{
	x=1 ; 
}

else x=0 ; 
return x ;
}


