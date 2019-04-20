
/**
* @file anim_entite_droite.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include "entite.h"
/**
* @brief animer l'entite  .
* @author Boubakri Nawres
* @param E entite
* @param rects[] frame
* @param screen l'ecran
* @param Background 
* @param positinFond
* @param continuer

* @return Nothing
*/


void animation_entite_gauche(ent* E ,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond,int continuer)
{



SDL_BlitSurface(Background,&positionFond,screen,NULL);

SDL_BlitSurface(E->spriteleft,&rects[E->curframe],screen,&E->dst);
 E->curframe--;

SDL_Flip(screen) ;
SDL_Delay(600) ;
 



if(E->curframe==1)
{
E->curframe=E->maxframe;


}





}
