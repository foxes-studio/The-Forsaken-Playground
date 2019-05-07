/**
*  @fonction.h
*/
#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
/**
* @struct Objet
* @brief struct for objet
*/
struct Objet
{
SDL_Surface *image ; 
SDL_Rect position ; 

}; 
typedef struct Objet Objet;
void initialiserObj( Objet *obj , char name[] , int x , int y ) ; 
void affichageObj ( Objet obj , SDL_Surface *screen) ; 
int collisionbb( SDL_Rect posj , SDL_Rect posobj ) ; 


#endif /* FONCTIONS_H_ */

