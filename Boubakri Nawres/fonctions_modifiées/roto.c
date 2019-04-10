#include"game.h"
#include<stdio.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include<time.h>
#include <SDL/SDL_rotozoom.h>



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

            angle += 2; //On augmente l'angle pour que l'image tourne sur elle-même.

 

            tempsPrecedent = tempsActuel;

        }

        else

        {

            SDL_Delay(TEMPS - (tempsActuel - tempsPrecedent));

        }

 

       

 

        rotation = rotozoomSurface(E.image_entite, angle, zoom, 0); //On transforme la surface image.

        

        //On repositionne l'image en fonction de sa taille.

       E. dst.x = 200;// event.button.x - rotation->w / 2;

       E.dst.y =  200;//event.button.y - rotation->h / 2;

 
        SDL_BlitSurface(backg , NULL, ecran, &positionFond);
        SDL_BlitSurface(rotation , NULL, ecran, &E.dst); //On affiche la rotation de la surface image.

       SDL_FreeSurface(rotation); //On efface la surface rotation car on va la redéfinir dans la prochaine boucle. Si on ne le fait pas, cela crée une fuite de mémoire. 

 

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
