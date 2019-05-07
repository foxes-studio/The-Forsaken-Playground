
/**
* @file roto.c
*/


#include"game.h"
#include<stdio.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include<time.h>
#include <SDL/SDL_rotozoom.h>

/**
* @brief rotation et zoom de l'entite  .
* @author Boubakri Nawres
* @param E entite
* @param ecran l'ecran
* @param backg background
* @param positionFond


* @return Nothing
*/

void rotation_enemy(ent E, SDL_Surface* ecran,SDL_Surface *backg,SDL_Rect positionFond)
{
    SDL_Surface  *rotation = NULL;

    SDL_Rect rect;

    SDL_Event event;

    double angle = 0;

    double zoom = 1;

    int sens = 1;

 

    int continuer = 1;

    int tempsPrecedent = 0, tempsActuel = 0;
    int TEMPS=30;

 


 

while(continuer)

{


        tempsActuel = SDL_GetTicks();

        if (tempsActuel - tempsPrecedent > TEMPS)

        {

            angle += 2; 

 

            tempsPrecedent = tempsActuel;

        }

        else

        {

            SDL_Delay(TEMPS - (tempsActuel - tempsPrecedent));

        }

 

       

 

        rotation = rotozoomSurface(E.image_entite, angle, zoom, 0); 

        

       

 
        SDL_BlitSurface(backg , NULL, ecran, &positionFond);
        SDL_BlitSurface(rotation , NULL, ecran, &E.dst); 
       SDL_FreeSurface(rotation); 
 

        if(zoom >= 2){sens = 0;}

        else if(zoom <= 0.5)
             {
                 sens = 1;
             }

 

        if(sens == 0){zoom -= 0.02;}

        else{zoom += 0.02;}

 

        SDL_Flip(ecran);

   }

 

  

}
