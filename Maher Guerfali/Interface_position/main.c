#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL_ttf.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include "head.h"
 


int main()
{
SDL_Surface *screen , *image , *image1, *texte,*cadre; 
SDL_Rect position , position1,positionn,positionn2 ; 
SDL_Event event,event2 ; 
int k;
char temps[100] = "";
TTF_Font *police = NULL;
int done=0 ,x,y,donee=0 ; 
    SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};


 SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
 police = TTF_OpenFont("mini.ttf", 12);

 if  ( SDL_Init ( SDL_INIT_VIDEO )  == -1 )  { 
         printf ( "Can not init SDL \n " ); 
 
     } 

     screen  =  SDL_SetVideoMode ( 1280,  720 ,  16 ,  SDL_HWSURFACE  |  SDL_DOUBLEBUF ); 
     if  ( screen  ==  NULL )  { 
         printf ( "Can not set video mode: \n "); 
         
     } 
     SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255 ,  255 )); 
	SDL_WM_SetCaption("Welcome  -------    ||  Maher Guerfali  ||    -------- Home ", NULL);

 
  
     image  =  IMG_Load( "2.png" ); 
cadre=IMG_Load("bord.png");
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     position.x  =  1000 ; 
     position.y  =  100; 
     position.w  =  image -> w ; 
     position.h  =  image -> h ; 
         SDL_BlitSurface(image, NULL, screen, &position);
          SDL_Flip(screen);




//img 2

          image1  =  IMG_Load( "1.png" ); 
     if  ( image1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     position1.x  =  250 ; 
     position1.y  =  250 ; 
positionn.x = 545;
        positionn.y = 79;
positionn2.x = 480;
        positionn2.y =7;
     position1.w  =  image1 -> w ; 
     position1.h  =  image1 -> h ; 
         SDL_BlitSurface(image1, NULL , screen, &position1);
          SDL_Flip(screen);

      while  ( done==0 )  { 
         while  (SDL_PollEvent ( &event ))  { 
             switch  ( event.type )  { 
             case  SDL_QUIT : 
                 done  =  1 ; 
                 break ;  
                 
             case SDL_KEYDOWN : 
                     switch( event.key.keysym.sym )
                        {
							case SDLK_RIGHT : 

 
							position.x+=50;
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255 )); 
							             SDL_BlitSurface(image, NULL, screen, &position);
          
                   SDL_BlitSurface(image1, NULL , screen, &position1);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);
sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y ); 
            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);
							break ; 
							case SDLK_LEFT : 

							position.x-=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255)); 
							             SDL_BlitSurface(image, NULL, screen, &position);
          
                   SDL_BlitSurface(image1, NULL , screen, &position1);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);
sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y ); 


            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 
        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);

							break ; 
							case SDLK_UP : 
					position.y-=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255)); 
							             SDL_BlitSurface(image, NULL, screen, &position);
           
                   SDL_BlitSurface(image1, NULL , screen, &position1);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);
sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y ); 


            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);
							break ; 
							case SDLK_DOWN  : 
						    position.y+=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255 )); 
							             SDL_BlitSurface(image, NULL, screen, &position);
          
                   SDL_BlitSurface(image1, NULL , screen, &position1);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);
sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y ); 


            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);

							break ;

					case SDLK_d : 

							position1.x+=50;
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255 )); 
							             SDL_BlitSurface(image1, NULL, screen, &position1);
					  
						   SDL_BlitSurface(image, NULL , screen, &position);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
					  SDL_Flip(screen);
sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d",position1.x,position1.y,position.x,position.y ); 
            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);
							break ; 
							case SDLK_q : 
 
							position1.x-=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255 )); 
							             SDL_BlitSurface(image1, NULL, screen, &position1);
      
                   SDL_BlitSurface(image, NULL , screen, &position);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);

sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y );  

 

            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);
							break ; 
							case SDLK_z : 

							position1.y-=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255)); 
							             SDL_BlitSurface(image1, NULL, screen, &position1);
        
                   SDL_BlitSurface(image, NULL , screen, &position);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          SDL_Flip(screen);

sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d",position1.x,position1.y,position.x,position.y );  

 

            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);
							break ; 
							case SDLK_s  : 

						   position1.y+=50 ;
							
							    SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  255,  255,  255 )); 
							             SDL_BlitSurface(image1, NULL, screen, &position1);
SDL_BlitSurface(cadre, NULL , screen, &positionn2);
          
                   SDL_BlitSurface(image, NULL , screen, &position);
          SDL_Flip(screen);

sprintf(temps, "PLAYER-1 x:%d y:%d  PLAYER-2 x:%d y:%d ",position1.x,position1.y,position.x,position.y );  

 

            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); 

        SDL_BlitSurface(texte, NULL, screen, &positionn); 
        SDL_Flip(screen);

							break ;
						}

						}

						  
break ;  
}
}

TTF_CloseFont(police);
    TTF_Quit();
 



return 0 ; 
}
