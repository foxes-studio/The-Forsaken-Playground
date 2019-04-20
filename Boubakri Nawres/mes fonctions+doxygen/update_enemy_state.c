
/**
* @file update_enemy_state.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include"entite.h"

/**
* @brief update enemy state.
* @author Boubakri Nawres
* @param E entite
* @param distEH distance enemy_hero
* @return Nothing
*/
void updateEnnemiState(ent* E, int distEH)
{
	// Selon l'état courant de l'ennemi, implementer les transitions t2, t4 et t6
   	

	/* Completer le code ici */
switch(E->State)
   {
                   

                 case WAITING :
        	{
            		
                        if((distEH>100)&&(distEH<600))//transition t2
                         E->State=FOLLOWING;

            		break;
        	}

        	case FOLLOWING :
        	{
            		
                         if((distEH>0)&&(distEH<100))//transition t4
                         E->State=ATTACKING;
            		break;
        	}

        	case ATTACKING :
        	{
			
                          if(distEH<=0)
                         E->State=WAITING;//transition t6
			break;
        	} 
               
      

   }
}
