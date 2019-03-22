#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>


void setrects(SDL_Rect* clip){

clip[0].x=0;
clip[0].y=0;
clip[0].w=1280;
clip[0].h=720;

clip[1].x=1280;
clip[1].y=0;
clip[1].w=1280;
clip[1].h=720;

clip[2].x=2560;
clip[2].y=0;
clip[2].w=1280;
clip[2].h=720;

clip[3].x=3840;
clip[3].y=0;
clip[3].w=1280;
clip[3].h=720;

clip[4].x=5120;
clip[4].y=0;
clip[4].w=1280;
clip[4].h=720;

clip[5].x=6400;
clip[5].y=0;
clip[5].w=1280;
clip[5].h=720;

clip[6].x=0;
clip[6].y=720;
clip[6].w=1280;
clip[6].h=720;

clip[7].x=1280;
clip[7].y=720;
clip[7].w=1280;
clip[7].h=720;

clip[8].x=2560;
clip[8].y=720;
clip[8].w=1280;
clip[8].h=720;

clip[9].x=3840;
clip[9].y=720;
clip[9].w=1280;
clip[9].h=720;

clip[10].x=5120;
clip[10].y=720;
clip[10].w=1280;
clip[10].h=720;

clip[11].x=6400;
clip[11].y=720;
clip[11].w=1280;
clip[11].h=720;

clip[12].x=0;
clip[12].y=1440;
clip[12].w=1280;
clip[12].h=720;

clip[13].x=1280;
clip[13].y=1440;
clip[13].w=1280;
clip[13].h=720;

clip[14].x=2560;
clip[14].y=1440;
clip[14].w=1280;
clip[14].h=720;

clip[15].x=3840;
clip[15].y=1440;
clip[15].w=1280;
clip[15].h=720;

clip[16].x=5120;
clip[16].y=1440;
clip[16].w=1280;
clip[16].h=720;

clip[17].x=6400;
clip[17].y=1440;
clip[17].w=1280;
clip[17].h=720;

clip[18].x=0;
clip[18].y=2160;
clip[18].w=1280;
clip[18].h=720;

clip[19].x=1280;
clip[19].y=2160;
clip[19].w=1280;
clip[19].h=720;

clip[20].x=2560;
clip[20].y=2160;
clip[20].w=1280;
clip[20].h=720;

clip[21].x=3840;
clip[21].y=2160;
clip[21].w=1280;
clip[21].h=720;

clip[22].x=5120;
clip[22].y=2160;
clip[22].w=1280;
clip[22].h=720;

clip[23].x=6400;
clip[23].y=2160;
clip[23].w=1280;
clip[23].h=720;





}
int main(int argc,char** argv)
{
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Surface*screen,*image;
screen=SDL_SetVideoMode(1280,720,32,SDL_SWSURFACE);
int running=1;
//Unit32 strart;
SDL_Rect rect;
int frame=0;
rect.x=0;
rect.y=0;
rect.w=1280;
rect.h=720;
image=IMG_Load("Background.jpg");
SDL_Rect rects[24];
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
if(frame==24){
frame=0;
}
//if(1000/FPS>SDL_GetTicks()-start))
//	SDL_Delay(1000/FPS-(SDL_GetTicks()-start));


}

SDL_FreeSurface(image);
SDL_Quit();

return 0;
}
