

/**
* @file dep_va_x.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"



/**
* @brief movement va et vient sur x .
* @author Boubakri Nawres
* @param E entite


* @return Nothing
*/



void enemy_va_x(ent* E)
{

int continuer=1;

int pos;
static int k=0;



E->pos_alea_max_x=position_aleatoire( E->pos_max_x,E->pos_min_x);


    

   
    if(k==0)

                  
                  { 
                            if(E->dst.x<E->pos_alea_max_x)
                          {
                            E->dst.x+=20;

                          }

                            else k=1;

             


        }

if(k==1)
                  {
                    if(E->dst.x>=E->pos_alea_max_x)
                            E->dst.x-=20;
                    else
                         k=0;
                  } 

   


}

