#include <stdio.h>
#include  <stdlib.h>
#include  <SDL/SDL.h>
#include <SDL/SDL_image.h>


SDL_Surface* Init_Object( SDL_Surface *Object ,SDL_Rect *image ,  int x , int y , char Name[]) 
 {
	       Object =  IMG_Load(Name); 
	      if  ( Object  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     else 
     {
 
     image->x  =  x ; 
     image->y  =  y ;
     image->h= Object->h ;
     image->w= Object->w ;  
 }
     
     return Object ; 
}
