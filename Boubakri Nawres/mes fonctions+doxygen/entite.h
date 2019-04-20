#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_rotozoom.h>
/**
* @enum enum
* @brief nouveau type
*/

typedef enum STATE STATE;
enum STATE {WAITING, FOLLOWING,ATTACKING,MOVING,RUN};

/**
* @struct ent
* @brief struct for entite
*/
 struct ent
{

SDL_Rect position_entite;/*!< Rectangle*/
SDL_Rect position_map;/*!< Rectangle*/
SDL_Rect frame;/*!< Rectangle*/
SDL_Rect dst;/*!< Rectangle*/


SDL_Surface * image_entite;/*!< Surface. */
SDL_Surface * spriteleft;/*!< Surface. */
SDL_Surface * spriteright;/*!< Surface. */

int pos_alea_max_x;/*!< int */
int pos_alea_min_x;/*!< int */

int pos_alea_max_y;/*!< int */
int pos_alea_min_y;/*!< int */

int pos_max_x;/*!< int */
int pos_min_x;/*!< int */

int pos_max_y;/*!< int */
int pos_min_y;/*!< int */
int curframe;/*!< int */
int maxframe;/*!< int */
int Direction;/*!<int */
STATE State;/*!<State */


};
typedef struct ent ent;

void afficher_entite_secondaire (ent *E, SDL_Surface *ecran) ;


void initialiser_entite(ent E[],int n);
void animation_entite_gauche(ent* E ,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond,int continuer);
void animation_entite_droite(ent* E ,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond);
void enemy_va_x(ent * E);
int  position_aleatoire(int positionmax,int positionmin);
void rotation_zoom(ent *E,SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond);


void move_ennemi(ent*E,SDL_Rect posHero);
void update_ennemi(ent* E, SDL_Rect posHero,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond);
void updateEnnemiState(ent* E, int distEH);
void freeEnnemi(ent *E);
void animateEnnemi(ent* E,SDL_Rect rects[],SDL_Surface*screen,SDL_Surface*Background,SDL_Rect positionFond);

#endif // JEU_H_INCLUDED


