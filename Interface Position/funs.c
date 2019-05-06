#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL_ttf.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include "head.h"
int disto(SDL_Rect p ,SDL_Rect s)
{
int k=0;
k=(p.x)-(s.x);
if (k>=0)
{return k;
}
else {
return (k*(-1));
}
}

