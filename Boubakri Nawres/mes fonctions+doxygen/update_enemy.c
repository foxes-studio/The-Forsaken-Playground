

/**
* @file update_enemy.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"



/**
* @brief mise a jour de l'ennemi
* @author Boubakri Nawres
* @param E entite
* @param posHero position de l'hero
* @param rects[]
* @param screen
* @param Background
* @param positionFond
* @return Nothing
*/

void update_ennemi(ent* E, SDL_Rect posHero,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond)
{
	int distEH = E->dst.x - (posHero.x + 84/* Hero_WIDTH*/);
	printf("distEH = %d\t E->State = %d\n", distEH,E->State);
    	switch(E->State)
    	{
        	case WAITING :
        	{
            		animateEnnemi(E,rects,screen,Background,positionFond);
            		break;
        	}

        	case FOLLOWING :
        	{
            		animateEnnemi(E,rects,screen,Background,positionFond);
            		move_ennemi(E,posHero);
            		break;
        	}

        	case ATTACKING :
        	{
			// Attaque en se déplaçant vers l'ennemi
		    	animateEnnemi(E,rects,screen,Background,positionFond);
			move_ennemi(E,posHero);
			break;
        	}
                      
    	}

	updateEnnemiState(E, distEH);	
}
