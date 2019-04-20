

/**
* @file move_enemy.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"
/**
* @brief afficher une entite secondaire.
* @author Boubakri Nawres
* @param E entite
* @param posHero position de l'hero
* @return Nothing
*/
void move_ennemi(ent*E,SDL_Rect posHero)
{

if (posHero.x<E->dst.x) //hero à gauche de l'ennemi
	{
        	E->dst.x -= 8; 
	}
}
