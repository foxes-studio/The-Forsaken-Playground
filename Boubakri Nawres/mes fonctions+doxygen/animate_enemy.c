

/**
* @file animate_enemy.c
*/


#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"

/**
* @brief animer une entite secondaire.
* @author Boubakri Nawres
* @param E entite
* @param screen l'ecran
* @param Background
* @param positionFond

* @return Nothing
*/

void animateEnnemi(ent* E,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond)
{

if(E->State != ATTACKING)
          
         {      E->spriteright=IMG_Load("fox-1.png");
               E->maxframe=5;
           }
if(E->State == ATTACKING)
           {
               E->spriteright=IMG_Load("mv1.png");
           }

/********************************************************/

SDL_BlitSurface(E->spriteright,&rects[E->curframe],screen,&E->dst);
SDL_Flip(screen) ;
SDL_Delay(200) ; 
 E->curframe++; 


if(E->curframe==E->maxframe)
{
E->curframe=0;
}



}
