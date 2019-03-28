#ifndef TACHESD_H_INCLUDED
#define TACHESD_H_INCLUDED

#include <stdbool.h> 

 int CollisionBB( SDL_Rect position , SDL_Rect position1 ) ; 
 bool CollisionTrigoCir ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect Pposition , SDL_Rect Oposition ) ; 
  bool CollisionTrigoInsc ( SDL_Surface *Player , SDL_Surface *C_Object , SDL_Rect position , SDL_Rect position1  ) ; 
  



#endif // TACHESD_H_INCLUDED
