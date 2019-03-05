#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>
void setrects(SDL_Rect* clip){
clip[0].x=0;
clip[0].y=0;
clip[0].w=114;
clip[0].h=160;

clip[1].x=114;
clip[1].y=0;
clip[1].w=114;
clip[1].h=160;

clip[2].x=228;
clip[2].y=0;
clip[2].w=114;
clip[2].h=160;

clip[3].x=342;
clip[3].y=0;
clip[3].w=114;
clip[3].h=160;

clip[4].x=456;
clip[4].y=0;
clip[4].w=114;
clip[4].h=160;

clip[5].x=570;
clip[5].y=0;
clip[5].w=114;
clip[5].h=160;

clip[6].x=684;
clip[6].y=0;
clip[6].w=114;
clip[6].h=160;

clip[7].x=798;
clip[7].y=0;
clip[7].w=114;
clip[7].h=160;

clip[8].x=912;
clip[8].y=0;
clip[8].w=114;
clip[8].h=160;
}
int main(int argc,char** argv)
{
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Surface*screen,*image;
screen=SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);
int running=1;
//Unit32 strart;
SDL_Rect rect;
int frame=0;
rect.x=10;
rect.y=10;
rect.w=20;
rect.h=20;
//Unit32 color=SDL_MapRBG(screen->format,0x00,0x00,0x00);
//Unit32 color2=SDL_MapRBG(screen->format,0xff,0xff,0xff);
image=IMG_Load("images.jpg");
SDL_Rect rects[9];
setrects(rects);
SDL_SetColorKey(image, SDL_SRCCOLORKEY, SDL_MapRGB(screen->format, 0x00, 0xff, 0xff));
while(running)
{

                SDL_Event event;
                while(SDL_PollEvent(&event)) {
                        switch(event.type) {
                                case SDL_QUIT:
                                        running = 0;
                                        break;
						}
					}
SDL_FillRect(screen,&screen->clip_rect,0x00);
SDL_FillRect(screen,&rect,0x00);
SDL_Rect rect;
rect.x=200;
rect.y=100;

SDL_BlitSurface(image,&rects[frame],screen,&rect);
SDL_Flip(screen);
frame++;
if(frame==9){
frame=0;
}
//if(1000/FPS>SDL_GetTicks()-start))
//	SDL_Delay(1000/FPS-(SDL_GetTicks()-start));


}

SDL_FreeSurface(image);
SDL_Quit();

return 0;
}
