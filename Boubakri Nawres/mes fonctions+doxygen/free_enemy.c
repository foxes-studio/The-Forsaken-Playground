


/**
* @file free_enemy.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"

/**
* @brief free sufrace.
* @author Boubakri Nawres
* @param E entite

* @return Nothing
*/

void freeEnnemi(ent *E)
{
	SDL_FreeSurface(E->spriteright);
}
