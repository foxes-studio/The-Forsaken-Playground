#include <stdio.h>
#include  <stdlib.h>
#include <SDL/SDL_ttf.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
#include "head.h" 
  int  main () 
  {
SDL_Rect button1,button2,button3,button4,kbira;
SDL_Surface *screen,*savemenue,*final,*bot11,*bot12,*bot13,*bot14,*bot4,*bot3,*bot2,*bot1;  
SDL_Event event ;
char filename[30]="menu/saves.txt";
char output[30]="saves_Crypted.txt";
char output2[30]="saves_Uncrypted.txt";
int x,ok,start;
int k=34;
char perc[40];
char cc[20];
TTF_Font *font=NULL;
TTF_Font *font2=NULL;
char kiko[20]="okolllo";
int running=1;
int positionFond,positionJ,y,score,vie,numo;
SDL_Color foregroundColor = { 238, 157, 40 };
SDL_Color backgroundColor = { 91, 37, 12 };
SDL_Surface *textSurface;
SDL_Rect textLocation1,textLocation2,textLocation3,textLocation4,textLocationvie1,textLocationvie2,textLocationvie3,textLocationvie4,textLocationscore1,textLocationscore2,textLocationscore3,textLocationscore4;
textLocation1.x=184;
textLocation1.y=250;
textLocation2.x=740;
textLocation2.y=290;
textLocation3.x=194;
textLocation3.y=474;
textLocation4.x=690;
textLocation4.y=460;

button1.x=161;
button1.y=223;
button1.w=468;
button1.h=212;
kbira.w=490;
kbira.h=224;
button2.x=696;
button2.y=254;
button3.x=185;
button3.y=453;
button4.x=696;
button4.y=447;


if  ( SDL_Init ( SDL_INIT_VIDEO )  == -1 )  { 
         printf ( "Can not init SDL \n " ); 
 
     } 



     screen  =  SDL_SetVideoMode ( 1280 ,  720 ,  32 ,  SDL_HWSURFACE  ); 
TTF_Init();
     if  ( screen  ==  NULL )  { 
         printf ( "Can not set video mode: \n "); 
         
     } 



     SDL_WM_SetCaption("Maher Guerfali",NULL)  ;
 font = TTF_OpenFont("Potra.ttf", 58);
font2 = TTF_OpenFont("kiro.ttf", 90);
final=IMG_Load( "menu/savemenue.png" );
bot1=IMG_Load( "menu/2.png" );
bot11=IMG_Load( "menu/3.png" );
bot2=IMG_Load( "menu/4.png" );
bot12=IMG_Load( "menu/5.png" );
bot3=IMG_Load( "menu/8.png" );
bot13=IMG_Load( "menu/9.png" );
bot4=IMG_Load( "menu/6.png" );
bot14=IMG_Load( "menu/7.png" );


encryption(filename,output);
decryption(output,output2);

SDL_BlitSurface ( final,  NULL ,  screen , NULL );
SDL_Flip ( screen ); 



while(running)
{
start=SDL_GetTicks();
SDL_Event event;

while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDL_QUIT:
running=0;
break;
case SDL_MOUSEMOTION:
x = event.motion.x;
y = event.motion.y;
if ((x>button1.x) && ((button1.x+button1.w)>x) && (y>button1.y) && (y<(button1.y+button1.h)))
{

SDL_BlitSurface ( bot1,  NULL ,  screen , NULL); 
numo=1;
extraire(output2,&positionFond,&positionJ ,&y ,&score ,&vie,numo);

calculermap(positionJ,cc);
textSurface = TTF_RenderText_Shaded(font,cc, foregroundColor, backgroundColor);

SDL_BlitSurface(textSurface, NULL, screen, &textLocation1);

SDL_Flip ( screen ); 

}
else if
((x>button2.x) && ((button2.x+button1.w)>x) && (y>button2.y) && (y<(button2.y+button1.h)))
{
SDL_BlitSurface ( bot2,  NULL ,  screen , NULL ); 
numo=2;
extraire(output2,&positionFond,&positionJ ,&y ,&score ,&vie,numo);

calculermap(positionJ,cc);
textSurface = TTF_RenderText_Shaded(font2,cc, foregroundColor, backgroundColor);

SDL_BlitSurface(textSurface, NULL, screen, &textLocation2);

SDL_Flip ( screen ); 
SDL_Flip ( screen ); 
}

else if
((x>button3.x) && ((button3.x+button1.w)>x) && (y>button3.y) && (y<(button3.y+button1.h)))
{
SDL_BlitSurface ( bot3,  NULL ,  screen , NULL ); 
numo=3;
extraire(output2,&positionFond,&positionJ ,&y ,&score ,&vie,numo);

calculermap(positionJ,cc);
textSurface = TTF_RenderText_Shaded(font,cc, foregroundColor, backgroundColor);

SDL_BlitSurface(textSurface, NULL, screen, &textLocation3);

SDL_Flip ( screen ); 
SDL_Flip ( screen ); 
}
else if
((x>button4.x) && ((button4.x+button1.w)>x) && (y>button4.y) && (y<(button4.y+button1.h)))
{
SDL_BlitSurface ( bot4,  NULL ,  screen , NULL ); 
numo=4;
extraire(output2,&positionFond,&positionJ ,&y ,&score ,&vie,numo);

calculermap(positionJ,cc);
textSurface = TTF_RenderText_Shaded(font,cc, foregroundColor, backgroundColor);

SDL_BlitSurface(textSurface, NULL, screen, &textLocation4);

SDL_Flip ( screen ); 
SDL_Flip ( screen ); 
}
else 
{
SDL_BlitSurface ( final,  NULL ,  screen , NULL ); 
SDL_Flip ( screen ); 
}
break;
case SDL_MOUSEBUTTONDOWN:
x=event.button.x;
y=event.button.y;
if ((x>button1.x) && ((button1.x+button1.w)>x) && (y>button1.y) && (y<(button1.y+button1.h))&& (event.button.button==SDL_BUTTON_LEFT))
{
SDL_BlitSurface ( bot11,  NULL ,  screen , NULL ); 
SDL_Flip ( screen ); 
}
else if((x>button2.x) && ((button2.x+button1.w)>x) && (y>button2.y) && (y<(button2.y+button1.h))&& (event.button.button==SDL_BUTTON_LEFT))
{
SDL_BlitSurface ( bot12,  NULL ,  screen , NULL ); 
SDL_Flip ( screen ); 
}

else if
((x>button3.x) && ((button3.x+button1.w)>x) && (y>button3.y) && (y<(button3.y+button1.h))&& (event.button.button==SDL_BUTTON_LEFT))
{
SDL_BlitSurface ( bot13,  NULL ,  screen , NULL ); 
SDL_Flip ( screen ); 
}
else if
((x>button4.x) && ((button4.x+button1.w)>x) && (y>button4.y) && (y<(button4.y+button1.h))&& (event.button.button==SDL_BUTTON_LEFT))
{
SDL_BlitSurface ( bot14,  NULL ,  screen , NULL ); 
SDL_Flip ( screen ); 
}


}

}
}

SDL_FreeSurface(textSurface);

TTF_CloseFont(font);
TTF_Quit();

SDL_Quit();
return 0;
}
