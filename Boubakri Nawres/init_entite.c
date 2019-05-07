
/**
* @file init_entite.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
#include"game.h"
/**
* @brief initialiser  l'entite  .
* @author Boubakri Nawres
* @param E[] entite
* @param n nombre d'entite



* @return Nothing
*/
void initialiser_entite(ent E[],int n)
{
int i;
char entite[300];
for(i=0;i<n;i++)

{E[i].spriteleft = NULL;
E[i].spriteright=  NULL;


E[i].position_entite.x=0;
E[i].position_entite.y=0;
E[i].position_map.x=0;
E[i].position_map.y=0;
E[i].frame.x=0;
E[i].frame.y=0;			
E[i].frame.w = 0;
E[i].frame.h =0;
E[i].dst.x=0;
E[i].dst.y=0;
E[i].curframe=0;
E[i].maxframe=0;


E[i].image_entite=NULL;


E[i].pos_alea_max_x=0;
E[i].pos_alea_min_x=0;

E[i].pos_alea_max_y=0;
E[i].pos_alea_min_y=0;

E[i]. pos_max_x=0;
E[i]. pos_min_x=0;

E[i]. pos_min_y=0;
E[i].pos_max_y=0;

E[i].Direction = 1;

E[i].State = WAITING;

if(i==0)
            {
              E[i].spriteright=IMG_Load("mv1.png");
              E[i].dst.x=800;
              E[i].dst.y=535;
              E[i].maxframe=6;
              E[i].frame.w =153;//153;
              E[i].frame.h =139;//139;
              E[i]. pos_max_x=600;
              E[i]. pos_min_x=150;
              E[i].curframe=0;
              
              


            }
if(i==1)
            {
               E[i].spriteright=IMG_Load("sprite_coeur.png");
               
               E[i].dst.y=600;
               E[i].dst.x=900;
               E[i].maxframe=6;
               E[i].frame.w =153;
               E[i].frame.h =139;
               E[i]. pos_max_x=600;
               E[i]. pos_min_x=150;
               
             
            }
if(i==2)
            {
               E[i].spriteright=IMG_Load("animation_coins.png");
               E[i].pos_max_x=500;
               E[i].pos_min_x=500;
               E[i].maxframe=10;
            
               E[i].dst.y=535;
               E[i].dst.x=600;
               
                 
            }

if(i==3)
            {  
               
               E[i].pos_max_x=150;
               E[i].pos_min_x=600;
               E[i].dst.x=600;
                E[i].dst.y=550;
               
                E[i].maxframe=6;
                E[i].curframe=0;
               
                 
          }
if(i==4)

            {
              E[i].spriteright=IMG_Load("feu.png");
              E[i].dst.x=600;
               E[i].dst.y=535;
               E[i].maxframe=9;
                E[i].curframe=0;

            }
if(i==5)

            {
              E[i].spriteright=IMG_Load("exp.png");
              
               E[i].dst.y=535;
               E[i].maxframe=7;
                E[i].curframe=0;

            }
if(i==6)
            {
               E[i].image_entite=IMG_Load("bombe.png");
               //E[i].dst.y=420;
               E[i].dst.y=535;
               E[i].dst.x=150;
               
             
            }
if(i==7)

            {
              E[i].spriteright=IMG_Load("tresor.png");
              E[i].dst.x=500;
               E[i].dst.y=535;
               E[i].maxframe=5;
                E[i].curframe=0;

            }
if(i==8)
           {
              E[i].spriteright=IMG_Load("B1.png");
              E[i].dst.x=0;
               E[i].dst.y=200;
               E[i].maxframe=8;
                E[i].curframe=0;
                E[i].pos_max_x=150;
               E[i].pos_min_x=600;

           }
if(i==9)
           {
              E[i].spriteright=IMG_Load("3.png");//piggy
              E[i].dst.x=450;
               E[i].dst.y=280;
               E[i].maxframe=10;
                E[i].curframe=0;
              

           }
if(i==10)//animation enemy 2
            {  
               
               
               E[i].dst.x=600;
                E[i].dst.y=550;
               
                E[i].maxframe=6;
                E[i].curframe=0;
               
                 
          }
if(i==11)
            {
               E[i].image_entite=IMG_Load("bombe.png");
               
               E[i].dst.y=535;
               E[i].dst.x=150;
               
             
            }
if(i==12)

            {
              E[i].spriteright=IMG_Load("exp.png");
              
               E[i].dst.y=535;
               E[i].maxframe=7;
                E[i].curframe=0;

            }
if(i==13)
            {
               E[i].image_entite=IMG_Load("coffre-2.png");
               
               E[i].dst.y=500;
               E[i].dst.x=500;
               
             
            }
}






}
