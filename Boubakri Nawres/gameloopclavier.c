#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "game.h"
 #include <stdbool.h>
#include<time.h>
#include <SDL/SDL_rotozoom.h> //bibliotheque rotozoom avec l'ajout de lSDL_gfx dans makefile


void setrects(SDL_Rect* clip , int LI , int HI , int frames ) 
{
int i ; 

clip[0].x=0 ;
clip[0].y=0;
clip[0].w=LI;
clip[0].h=HI; 
for (i=1;i<frames;i++) 
{
clip[i].x=clip[i-1].x+LI;
clip[i].y=0;
clip[i].w=LI;
clip[i].h=HI;
}
}


void gameloopc(SDL_Surface *screen , SDL_Surface *sprite ,SDL_Surface *sprite2,SDL_Surface *sprite3,  SDL_Surface *Background , SDL_Rect positionFond , int *running , int *level2 )
{
SDL_Surface *Level=NULL , *t=NULL  , *screen1 , *imh0 , *v1 , *v2 , *v3 , *v4 , *v5 , *lv2 ;  
int frame=0 , frame1=0; 
SDL_Rect rect , rects[4] ,rect2[6],rect3[8],rect4[10],rect5[10],rect6[9], rect7[7], rect8[5],rect9[10],rect11[6],rect12[7], dst , rect1 ,pos , perso , p  ,p1 , ph0 ,pf , ps  ; // ajout des nouveaux rects
int n , positionini=0 , c , c1 , k , vitesse=3  ;
int run , r , alea=0 , s , sol=-2 , up=0 , right=0 , left=0 , level=1 , done=0 , reset=0 , firstwin=0 ;
char image [30] ;   
object obj , obj1 , obj2 , obj3 , save; 
ent E[15] ; //modification de taille de tab 
enigme  e;
temps temp;
SDL_Color rouge = {255,255,255};
vie vie ; 
score score ; 
int i=0 , sc=0 , sav=0 , x ,y , yes=-1 ; 
int test=0;//ajout de variable
int firsttime=0 ;
SDL_Surface  *rotation = NULL;//ajout de variable

   

    SDL_Event event;//ajout de variable

    double angle = 0;//ajout de variable

    double zoom = 1;//ajout de variable

    int sens = 1;//ajout de variable

   int tp = 0, ta = 0;//ajout de variable
    int TEMPS=30;//ajout de variable



TTF_Init();


temp=inisaliser_temp (temp);

initialiservie(&vie);
initialiscore(&score) ; 
    srand(time(NULL));

init_enigme(&e) ; 
initialiser_entite(E,15);//initialiser 15 entite


initialiserObj(&save,"save.png",0,0) ; 

initialiserObj(&obj,"F.png",4351,560) ; 
initialiserObj(&obj1,"gm2.jpg",0,0) ;
initialiserObj(&obj2,"F.png",2300,571) ; 
initialiserObj(&obj3,"go2.jpg",0,0) ; 

      lv2  =  IMG_Load( "map2.png" ); 

pf.x=0 ; 
pf.y=0 ; 

ps.x=988 ; 
ps.y=449 ; 

p.x=200 ; 
p.y=0 ;
p.h=720 ; 

ph0.x=612 ; 
ph0.y=512 ;

p1.x=340.2 ; 
p1.y=480 ;


dst.x=0 ; 
dst.y=535 ;
dst.h=117 ; 
dst.w=78 ; 

rect.x=0;
rect.y=535;
rect.h=117 ; 
rect.w=78 ; 

pos.x=300;
pos.y=500;
pos.h=220 ; 
pos.w=100 ; 

v1=IMG_Load("h1.png");
v2=IMG_Load("h2.png");
v3=IMG_Load("h3.png");
v4=IMG_Load("h4.png");
v5=IMG_Load("h5.png");
imh0=IMG_Load("h0.png");


sprite = IMG_Load("sprite.png") ;

sprite2 = IMG_Load("sprite2.png") ; 
sprite3 = IMG_Load("sprite3.png") ; 
setrects(rects,78,117,5); 
setrects(rect2,153,139,6);
setrects(rect4,91.8,153,10);


setrects(rect3,114.75,139,8);
setrects(rect2,153,153,6);
setrects(rect4,91.8,153,10);
setrects(rect5,200,200,6);
setrects(rect6,200,200,9);
setrects(rect7,200,200,7);
setrects(rect8,150,150,5);
setrects(rect9,88,62,10);
setrects(rect11,200,200,6);
setrects(rect12,200,200,7);

//des nouveaux rects sont ajoutées

SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

SDL_EnableKeyRepeat(1,1) ; 
while(!done)
{
	    run=1,r=0 ;
                SDL_Event event;
                while(SDL_PollEvent(&event)) {
                        switch(event.type) {
                                case SDL_QUIT:
                                        *running = 1;
done=1 ;  
                                        break;


     case SDL_KEYDOWN:

        switch(event.key.keysym.sym)

        {
      case SDLK_ESCAPE : 
      sav=1 ; 
     
   
break ; 
case SDLK_RIGHT :
left=0 ; 
right=1 ; 
rect.x+=vitesse ; 
if(k==1)
{
vitesse=10 ; 
}
scrollingright(&rect,&positionFond) ; 
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{
dst.x=rect.x ;
}
break ;
case SDLK_LEFT : 
right=0 ; 
left=1 ;  
rect.x-=vitesse ; 
scrollingleft(&rect,&positionFond) ; 
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}
    
break ;

case SDLK_UP : 

if (level==1)
{
if(right==1)  
{

while((rect.y>400)&&(up==0))
{
rect.x+=20 ; 
 rect.y-=20 ;  
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec
}
if((dst.x>2581)&&(dst.x<3221)) 
{
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu 
/*enemy_va_x(&E[0]) ;*/
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);

}
if(rect.y<=400)
{
up=1 ;
rect.x+=20 ;
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu 
}
if((dst.x>2581)&&(dst.x<3221)) 
{
/*animation_entite_droite(&E[0],rect2,screen,Background, positionFond);
enemy_va_x(&E[0]) ;*/
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 

affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
while ((rect.y<535)&&(up==1)) 
{
rect.y+=20 ; 
rect.x+=20 ; 
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
/*animation_entite_droite(&E[0],rect2,screen,Background, positionFond);
enemy_va_x(&E[0]) ;*/
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec
}
if((dst.x>2581)&&(dst.x<3221)) 
{
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 

affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
} 
if(rect.y==535) 
{
up=0 ; 
}








if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}

}
  

  
else if(left==1)   
{
scrollingleft(&rect,&positionFond) ; 
while((rect.y>400)&&(up==0))
{
rect.x-=20 ; 
 rect.y-=20 ;  
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
/*animation_entite_droite(&E[0],rect2,screen,Background, positionFond);
enemy_va_x(&E[0]) ;*/
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec intelligence artificielle
}
if((dst.x>2581)&&(dst.x<3221)) 
{
/*animation_entite_droite(&E[0],rect2,screen,Background, positionFond);
enemy_va_x(&E[0]) ;*/
//update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c);// animation_enemy avec intelligence artificielle
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu 
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
if(rect.y<=400)
{
up=1 ;
rect.x-=20 ;  
scrollingleft(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
/*animation_entite_droite(&E[0],rect2,screen,Background, positionFond);
enemy_va_x(&E[0]) ;*/
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec intelligence artificielle
}
if((dst.x>2581)&&(dst.x<3221)) 
{
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu 
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
while ((rect.y<535)&&(up==1)) 
{
rect.y+=20 ; 
rect.x-=20 ; 
scrollingleft(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);
if((dst.x>640)&&(dst.x<1280)) 
{
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation_enemy avec intelligence artificielle
}
if((dst.x>2581)&&(dst.x<3221)) 
{
animation_entite_droite(&E[4],rect6,screen,Background, positionFond); //animation de feu 
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
} 
if(rect.y==535) 
{
up=0 ; 
}
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}

}
}

if (level==2)
{
if(right==1)  
{

while((rect.y>430)&&(up==0))
{
rect.x+=20 ; 
 rect.y-=20 ;  
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
if(rect.y<=430)
{
up=1 ;
rect.x+=20 ;
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 

affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
while ((rect.y<500)&&(up==1)) 
{
rect.y+=20 ; 
rect.x+=20 ; 
scrollingright(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite2,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 

affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
} 
if(rect.y==500) 
{
up=0 ; 
}








if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}

}
  

  
else if(left==1)   
{
scrollingleft(&rect,&positionFond) ; 
while((rect.y>400)&&(up==0))
{
rect.x-=20 ; 
 rect.y-=20 ;  
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);

}
if(rect.y<=400)
{
up=1 ;
rect.x-=20 ;  
scrollingleft(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);
}
while ((rect.y<500)&&(up==1)) 
{
rect.y+=20 ; 
rect.x-=20 ; 
scrollingleft(&rect,&positionFond) ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 

 
affichanim(sprite,rects,screen,rect,&frame);

SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 
affichervie(&vie,screen , &i);
afficherscore(&score,screen , &sc);

} 
if(rect.y==500) 
{
up=0 ; 
}
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}

}
}
break ;



	case SDLK_y :

		 if (sav==1)
	
	{

 
fichier("save.txt",&(positionFond.x), &(rect.x)  , &(rect.y) , &sc , &i , &running) ;  


done=1 ;

}

	

	
break ; 

 case SDLK_n : 

		 if (sav==1)
{

done=1 ;


}

break ; 

break ; 

}







						}
						
	if (level==1) 
	{	

if((positionFond.x>=3240)&&(positionFond.x<4330))
{

sc=3 ; 

}

if((positionFond.x>=640)&&(positionFond.x<1280))
{

sc=1 ; 

}


if((positionFond.x>=1280)&&(positionFond.x<1940))
{

sc=2 ; 

}

				
k=collisionbb(dst,obj2.position) ; 


c=collisionbb(rect,E->dst) ; 
if((c)&&(dst.x>640)&&(dst.x<1280))
{
i++ ; 
rect.x=0 ; 
positionFond.x=0 ; 
sc-- ; 
}

c1=collisionbb(dst,obj.position) ; 
if((c1)&&(dst.x>2581)&&(dst.x<3221))
{
i++ ; 
sc-- ; 
rect.x=0 ; 
positionFond.x=0 ; 
}

if(i==5)
{

affichageObj(obj3,screen) ;
SDL_BlitSurface(temp.temp,NULL,screen,&p1);
imh0=IMG_Load("h0.png");
SDL_BlitSurface(imh0,NULL,screen,&ph0);
SDL_Flip(screen) ; 
SDL_Delay(1000) ; 
*running=1 ; 
 
}

c1=CollisionTrigoCir(dst,obj.position) ; 
if (c1 && firsttime==0) 
{
   firsttime=1 ;
   generate_afficher ( screen  , image ,&e,&alea) ;
 s=solution_e (image );
do
{
			r=resolution (running,&run);
			}
while((r>3 || r<1)&&(run!=0)) ;


  


if(s==r) 
{


rect.x+=200 ; 


}

else 
{
firsttime=0 ; 
i++ ; 
sc-- ; 
rect.x-=50 ; 
affichervie(&vie,screen , &i); 
afficherscore(&score,screen , &sc);
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 
affichanim(sprite2,rects,screen,rect,&frame);
affichervie(&vie,screen , &i);
if(i==5)

 
{
firsttime=1 ; 
}

}

} 

















if ((( dst.x>=1800)&&(dst.x+rect.w<=2028))||(( dst.x>=3194)&&(dst.x+rect.w<=3382))||(( dst.x>=4117)&&(dst.x+rect.w<=4203)))
{

while(rect.y<720)
{
rect.y+=30 ; 
SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ; 
affichanim(sprite,rects,screen,rect,&frame);
}
if ( positionFond.x>=640 )
{
dst.x=rect.x+positionFond.x ;  
}
else 
{dst.x=rect.x ;}
rect.x=0 ; 
rect.y=535 ; 
positionFond.x=0 ;
i++ ;
sc-- ; 
 

}
}


}
afficherscore(&score,screen , &sc);
affichervie(&vie,screen , &i);

if (level==1) 
{
affichageObj(obj2,Background) ; 
affichageObj(obj,Background) ; 
if(dst.x>2560)
{
vitesse=3 ; 
}




//les animations
if((dst.x>0)&&(dst.x<600))
{
animation_entite_droite(&E[8],rect3,screen,Background, positionFond); //animation butterfly
enemy_va_x(&E[8]) ;

}

if((dst.x>700)&&(dst.x<1000))
{
animation_entite_droite(&E[8],rect3,screen,Background, positionFond); //animation butterfly
enemy_va_x(&E[8]) ;

}

if((dst.x>1000)&&(dst.x<2800))
{
animation_entite_droite(&E[8],rect3,screen,Background, positionFond); //animation butterfly
enemy_va_x(&E[8]) ;

}

/*if((dst.x>200)&&(dst.x<630))
{
animation_entite_droite(&E[2],rect4,screen,Background, positionFond);//animation coins
}*/
if((dst.x>1280)&&(dst.x<2000))
{
animation_entite_droite(&E[2],rect4,screen,Background, positionFond);//animation coins
}

if((dst.x>2000)&&(dst.x<2500))
{
animation_entite_droite(&E[2],rect4,screen,Background, positionFond);//animation coins
}

if((dst.x>640)&&(dst.x<1280)) 
{
update_ennemi(& E[0], rect,rect2,screen,Background, positionFond,c,0);// animation fox avec intelligence artificielle
}
if((dst.x>3500)&&(dst.x<3800))
{
animation_entite_droite(&E[7],rect8,screen,Background, positionFond);  // animation trésor
}
if((dst.x>2581)&&(dst.x<3221)) 
{




animation_entite_droite(&E[4],rect6,screen,Background, positionFond);  // animation Feu
}

if((dst.x>1280)&&(dst.x<1600)) 
{
animation_entite_droite(&E[1],rect2,screen,Background, positionFond);  // animation coeur
}

if((dst.x>2000)&&(dst.x<2700)) 
{
animation_entite_droite(&E[1],rect2,screen,Background, positionFond);  // animation coeur
}

if((dst.x>640)&&(dst.x<1280)) 
{
animation_entite_droite(&E[9],rect9,screen,Background, positionFond);  // animation piggy
}

//animation enemy 2

if((dst.x>0)&&(dst.x<300)) 
{



 afficher_entite_secondaire (&E[11], screen);


}




if((dst.x>0)&&(dst.x<600)) 
{


test=collisionbb( dst , E[11].dst );
printf("test :%d\n",test);

update_ennemi(& E[10], rect,rect11,screen,Background, positionFond,test,10);// animation_enemy avec intelligence artificielle


if(test!=0)
{
E[12].dst.x=E[10].dst.x-60;
animation_entite_droite(&E[12],rect12,screen,Background, positionFond);//animation bombe 
}








}



//rotation et zoom
if((dst.x<640)&&(dst.x>400))
{

  
ta = SDL_GetTicks();

 if (ta - tp > TEMPS)

        {

            angle += 2; 

 

            tp = ta;

        }

        else

        {

            SDL_Delay(TEMPS - (ta - tp));

        }
 

       
 E[13]. dst.x =850;
       E[13].dst.y =  300;
 

        rotation = rotozoomSurface(E[13].image_entite, angle, zoom, 0); //On transforme la surface image.

       

 
        SDL_BlitSurface(Background , NULL, screen, &positionFond);
        SDL_BlitSurface(rotation , NULL, screen, &E->dst); 

        SDL_FreeSurface(rotation); 


 

        if(zoom >= 2){sens = 0;}

        else if(zoom <= 0.5)
             {
                 sens = 1;
             }

 

        if(sens == 0){zoom -= 0.02;}

        else{zoom += 0.02;}

 

        SDL_Flip(screen);

   // SDL_FreeSurface(E[13].image_entite);


//afficher_entite_secondaire (&E[13], screen);
}

if(dst.x>=obj.position.x+obj.position.h)
{

sc=5 ; 
afficherscore(&score,screen , &sc);
SDL_Delay(1000) ; 

if (firstwin==0)
{
	
affichageObj(obj1,screen) ; 


firstwin=1; 
}
SDL_BlitSurface(temp.temp,NULL,screen,&p1);
if(i==0)
{
SDL_BlitSurface(v1,NULL,screen,&ph0);
}
else if(i==1)
{
SDL_BlitSurface(v2,NULL,screen,&ph0);
}
else if (i==2)
{
SDL_BlitSurface(v3,NULL,screen,&ph0);
}
else if (i==3)
{
SDL_BlitSurface(v4,NULL,screen,&ph0);
}
else if (i==4)
{
SDL_BlitSurface(v5,NULL,screen,&ph0);
}
if(sc==0)
{
SDL_BlitSurface(score.fond1,NULL,screen,&ps);
}
else if(sc==1)
{
SDL_BlitSurface(score.fond2,NULL,screen,&ps);
}
else if (sc==2)
{
SDL_BlitSurface(score.fond3,NULL,screen,&ps);
}
else if (sc==3)
{
SDL_BlitSurface(score.fond4,NULL,screen,&ps);
}
else if (sc==4)
{
SDL_BlitSurface(score.fond5,NULL,screen,&ps);
}
else if (sc==5)
{
SDL_BlitSurface(score.fond6,NULL,screen,&ps);
}
SDL_Flip(screen) ; 
SDL_Delay(2000) ; 
rect.y=500 ;
rect.x=0 ; 
positionFond.x=0 ; 
positionFond.y=720 ;
level=2 ; 
i=0 ; 
sc=0 ; 
 


}
}

if(right==1)
{

SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ;  
affichanim(sprite2,rects,screen,rect, &frame );


}
else if (left==1) 
{

SDL_BlitSurface(Background,&positionFond,screen,NULL);
SDL_Flip(screen) ;  
affichanim(sprite,rects,screen,rect,&frame);
}

if(sav==1)
{
	affichageObj(save,screen) ; 
}

temp.temp=TTF_RenderText_Blended(temp.police,temp.chaine,rouge);

temp.tempactuel=SDL_GetTicks();

if (temp.tempactuel- temp.tempprecedent >1000  )
{
temp.seconde1++;
temp.tempprecedent= temp.tempactuel;

}
if (temp.seconde1>9)
{
	temp.seconde1=0;
	temp.seconde2++;
}
if (temp.seconde2>=6)
{
	temp.seconde2=0;
	temp.minute1++;
}
if (temp.minute1>=9)
{
	temp.minute1=0;
	temp.minute2++;
}
if (temp.minute2>=6)
{
	temp.minute2=0;
	temp.heur1++;
}
if (temp.heur1>=9)
{
	temp.heur1=0;
	temp.heur2++;
}






sprintf(temp.chaine,"%d %d : %d %d : %d %d     %s",temp.heur2,temp.heur1,temp.minute2,temp.minute1,temp.seconde2,temp.seconde1,"Player1");
if (level==2) 
{
	if (reset==0)
	{
	temp.heur2=0 ; 
	temp.heur1=0 ; 
	temp.minute2=0 ; 
	temp.minute1=0 ; 
	temp.seconde2=0 ; 
	temp.seconde1=0 ;
	reset=1 ; 

} 
sprintf(temp.chaine,"%d %d : %d %d : %d %d     %s",temp.heur2,temp.heur1,temp.minute2,temp.minute1,temp.seconde2,temp.seconde1,"Player2");
}
SDL_BlitSurface(temp.temp,NULL,screen,&temp.position_temp);
SDL_Flip(screen) ; 


/*if (level==2) 
{


if((dst.x<640)&&(dst.x<1280))
{if((dst.x>0)&&(dst.x<300)) 
{



 afficher_entite_secondaire (&E[6], screen);


}




if((dst.x>0)&&(dst.x<600)) 
{


test=collisionbb( dst , E[11].dst );
printf("test :%d\n",test);

update_ennemi(& E[10], rect,rect11,screen,Background, positionFond,test,10);// animation_enemy avec intelligence artificielle


if(test!=0)
{
E[12].dst.x=E[10].dst.x-80;
animation_entite_droite(&E[12],rect12,screen,Background, positionFond);//animation bombe 
}


}
}



}*/
}



}





