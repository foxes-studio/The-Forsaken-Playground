#ifndef TACHESD_H_INCLUDED
#define TACHESD_H_INCLUDED

SDL_Surface* Init_Object( SDL_Surface *Object ,SDL_Rect *image ,  int x , int y , char Name[]) ; 
 void Show_Object (SDL_Surface *Object , SDL_Surface *screen , SDL_Rect Rect  ) ; 
 bool CollisionBB( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect position , SDL_Rect position1 ) ; 
 bool CollisionTrigoCir ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect Pposition , SDL_Rect Oposition ) ; 
  bool CollisionTrigoInsc ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect position , SDL_Rect position1  ) ; 
  



#endif // TACHESD_H_INCLUDED
