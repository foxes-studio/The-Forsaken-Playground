#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>


void setrects(SDL_Rect* clip){
clip[0].x=0;
clip[0].y=0;
clip[0].w=1920;
clip[0].h=1080;

clip[1].x=1920;
clip[1].y=0;
clip[1].w=1920;
clip[1].h=1080;

clip[2].x=3840;
clip[2].y=0;
clip[2].w=1920;
clip[2].h=1080;

clip[3].x=5760;
clip[3].y=0;
clip[3].w=1920;
clip[3].h=1080;

clip[4].x=0;
clip[4].y=1080;
clip[4].w=1920;
clip[4].h=1080;

clip[5].x=1920;
clip[5].y=1080;
clip[5].w=1920;
clip[5].h=1080;

clip[6].x=3840;
clip[6].y=1080;
clip[6].w=1920;
clip[6].h=1080;

clip[7].x=5760;
clip[7].y=1080;
clip[7].w=1920;
clip[7].h=1080;

clip[8].x=0;
clip[8].y=2160;
clip[8].w=1920;
clip[8].h=1080;

clip[9].x=1920;
clip[9].y=2160;
clip[9].w=1920;
clip[9].h=1080;

clip[10].x=3840;
clip[10].y=2160;
clip[10].w=1920;
clip[10].h=1080;

clip[11].x=5760;
clip[11].y=2160;
clip[11].w=1920;
clip[11].h=1080;

clip[12].x=0;
clip[12].y=3240;
clip[12].w=1920;
clip[12].h=1080;

clip[13].x=1920;
clip[13].y=3240;
clip[13].w=1920;
clip[13].h=1080;

clip[14].x=3840;
clip[14].y=3240;
clip[14].w=1920;
clip[14].h=1080;

clip[15].x=5760;
clip[15].y=3240;
clip[15].w=1920;
clip[15].h=1080;

clip[16].x=0;
clip[16].y=4320;
clip[16].w=1920;
clip[16].h=1080;

clip[17].x=1920;
clip[17].y=4320;
clip[17].w=1920;
clip[17].h=1080;

clip[18].x=3840;
clip[18].y=4320;
clip[18].w=1920;
clip[18].h=1080;

clip[19].x=5760;
clip[19].y=4320;
clip[19].w=1920;
clip[19].h=1080;

clip[20].x=0;
clip[20].y=5400;
clip[20].w=1920;
clip[20].h=1080;

clip[21].x=1920;
clip[21].y=5400;
clip[21].w=1920;
clip[21].h=1080;

clip[22].x=3840;
clip[22].y=5400;
clip[22].w=1920;
clip[22].h=1080;

clip[23].x=5760;
clip[23].y=5400;
clip[23].w=1920;
clip[23].h=1080;

clip[24].x=0;
clip[24].y=6480;
clip[24].w=1920;
clip[24].h=1080;

clip[25].x=1920;
clip[25].y=6480;
clip[25].w=1920;
clip[25].h=1080;

clip[26].x=3840;
clip[26].y=6480;
clip[26].w=1920;
clip[26].h=1080;

clip[27].x=5760;
clip[27].y=6480;
clip[27].w=1920;
clip[27].h=1080;




}
int main(int argc,char** argv)
{
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Surface*screen,*image;
screen=SDL_SetVideoMode(1920,1080,32,SDL_SWSURFACE);
int running=1;
//Unit32 strart;
SDL_Rect rect;
int frame=0;
rect.x=0;
rect.y=0;
rect.w=1920;
rect.h=1080;
//Unit32 color=SDL_MapRBG(screen->format,0x00,0x00,0x00);
//Unit32 color2=SDL_MapRBG(screen->format,0xff,0xff,0xff);
image=IMG_Load("Back3.jpg");
SDL_Rect rects[28];
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
rect.x=0;
rect.y=0;

SDL_BlitSurface(image,&rects[frame],screen,&rect);
SDL_Flip(screen);

SDL_Delay(100) ; 
frame++;
if(frame==28){
frame=0;
}
//if(1000/FPS>SDL_GetTicks()-start))
//	SDL_Delay(1000/FPS-(SDL_GetTicks()-start));


}

SDL_FreeSurface(image);
SDL_Quit();

return 0;
}
