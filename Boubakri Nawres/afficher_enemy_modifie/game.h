#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>

typedef struct 
{
int x;
int y;
int w;
int h
}Frame;

typedef struct
{

SDL_Rect  position_enemy;
SDL_Surface * image_enemy;
Frame frame



} enemy;



void initialiser_enemy(enemy E);
int afficher_enemy(enemy E,SDL_Surface*screen);


















































#endif /* FONCTIONS_H_ */
