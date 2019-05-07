/**
* @file fonction.c
*/
#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "fonction.h"
/**
* @brief To initialiser object .
* @param obj
* @param name
* @param x
* @param y
* @return Nothing
*/
void initialiserObj( Objet *obj , char name[] , int x , int y ) 
{

	       obj->image =  IMG_Load(name); 
	      if  ( obj->image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     else 
     {
 
     obj->position.x  =  x ; 
     obj->position.y  =  y ; 
     obj->position.h  =  obj->image->h ;
obj->position.w = obj->image->w ;
}

}
void affichageObj ( Objet obj , SDL_Surface *screen) 
{

SDL_BlitSurface(obj.image, NULL, screen, &(obj.position));
SDL_Flip(screen);

}
/**
* @brief To collision bounding box.
* @param posj
* @param posobj
* @return integer
*/
int collisionbb( SDL_Rect posj , SDL_Rect posobj )
{
 int x ; 
if ( ((posj.y+posj.h>=posobj.y)&&(posj.y<=posobj.y+posobj.h)&&(posj.x+posj.w>=posobj.x)&&(posj.x<=posobj.x+posobj.w)) )
{
	x=1 ; 
}

else x=0 ; 
return x ;
}

