






/**
* @file pos_alea.c
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
#include"entite.h"

/**
* @brief donner une  positon aleatoire  .
* @author Boubakri Nawres
* @param positionmax 
* @param positionmin


* @return int
*/




int position_aleatoire(int positionmax,int positionmin)
{
int pos;
 srand(time(NULL));
pos=rand()%(positionmax-positionmin+1)+positionmin;


return pos;
}
