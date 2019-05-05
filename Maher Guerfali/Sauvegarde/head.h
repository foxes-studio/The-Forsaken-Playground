/**
* @struct sauvgardes
* @brief struct for sauvgardes
*/
#include <stdio.h>
#include  <stdlib.h>
#include <SDL/SDL_ttf.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
 #include <SDL/SDL_mixer.h>
void fichier(char nomfichier[],int *positionFond, int *positionJ  , int *y , int *score , int *vie , int *running);
void extraire(char nomfichier[],int *positionFond, int *positionJ , int *y , int *score , int *vie,int numo );
void calculermap(int positionJ,char *kk);
void clean_up(SDL_Surface *screen,SDL_Surface *textSurface,TTF_Font *Font);
void decryption(char nomfichier[],char output[]);
void encryption(char nomfichier[],char output[]);

