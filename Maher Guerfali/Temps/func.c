#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL_ttf.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"head.h"
void monguela()
{
 
    SDL_Surface *ecran = NULL, *texte = NULL,*bord;
    SDL_Rect position,positionbord;
    SDL_Event event;
    TTF_Font *police = NULL;
    SDL_Color couleurNoire = {90, 100, 0}, couleurBlanche = {0, 0, 0};
    int continuer = 1;
    int tempsActuel = 0, tempsPrecedent = 0, compteur = 0;
    char temps[20] = "";
int fph=0,fps=0,fpm=0,n;
float dt;
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    ecran = SDL_SetVideoMode(1280, 720, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Monguela :D", NULL);

    police = TTF_OpenFont("goods.ttf", 14);
	position.x = 73;
        position.y = 96;
	positionbord.x = 30;
        positionbord.y = 5;
bord=IMG_Load( "bord.png" );
    tempsActuel = SDL_GetTicks();
   sprintf(temps,"TIME  %d - %d - %d",fph,fpm,fps-(60*fpm));
    texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche);

    while (n )
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                n = 0;
                break;
        }



        tempsActuel = SDL_GetTicks();
          dt=tempsActuel - tempsPrecedent;
         
      if ( dt >= 1000)
        {
          compteur += 1000;

          fps=compteur/1000;
           
               
             if (fps>59)
                 { fpm=(fps/60);
                  //  maybe fps=fps-(60*fpm);
                   
                   if(fpm>59)
                      fph=(fpm/60);
                  
                  
                 }
             
           
           
              
            sprintf(temps,"TIME  %d - %d - %d",fph,fpm,fps-(60*fpm)); 


           /* On écrit la chaîne temps dans la SDL_Surface */
              // texte = TTF_RenderText_Solid(police, temps, couleurNoire);
 SDL_FreeSurface(texte);
             texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche);


            tempsPrecedent = tempsActuel; 
        }


 SDL_BlitSurface(texte, NULL, ecran, &position); 

        SDL_BlitSurface(bord, NULL, ecran, &positionbord); 

        SDL_Flip(ecran);

    }


    TTF_CloseFont(police);
    TTF_Quit();
 SDL_FreeSurface(texte);

    SDL_Quit();
}

