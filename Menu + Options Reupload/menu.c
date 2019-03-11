#include <stdio.h>
#include  <stdlib.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
 #include <SDL/SDL_mixer.h>

 int  main () 
 { 
     SDL_Surface  * screen , *scr ,  * image , *img , *img1 , *img2 , *img3 , *img4 ; 
     SDL_Rect  dst , dst1 , dst2  , dst3; 
     SDL_Event  event ; 
     Mix_Music *music , *music1 ; 
     int  done  =  0 ; 
      int i=1 ; 
      int k=0 , c =0 , j=0 , menu=1 , j1; 
      int x , y ; 
      
  
     if  ( SDL_Init ( SDL_INIT_VIDEO )  == -1 )  { 
         printf ( "Can not init SDL \n " ); 
 
     } 

     screen  =  SDL_SetVideoMode ( 1920 ,  1080 ,  16 ,  SDL_HWSURFACE  |  SDL_DOUBLEBUF ); 
     if  ( screen  ==  NULL )  { 
         printf ( "Can not set video mode: \n "); 
         
     } 
     SDL_FillRect ( screen ,  NULL ,  SDL_MapRGB ( screen -> format,  0 ,  0 ,  255 )); 
     image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     while  ( ! done )  { 
         while  (SDL_PollEvent ( & event ))  { 
             switch  ( event . type )  { 
             case  SDL_QUIT : 
                 done  =  1 ; 
                 break ;  
                 
             case SDL_KEYDOWN : 
                     switch( event.key.keysym.sym )
                        {
					             case  SDLK_ESCAPE : 
       image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
               if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     if (c==1)
     {
		 j-- ;
	 }
     i=1 ; 
     c=0 ; 
     menu=1 ; 
     
                 break ;  
      case SDLK_DOWN :
if (menu==1) 
{
 if (i==1) 
     { 
		 	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
		 img  =  IMG_Load( "scroll.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  220 ; 
     dst1 . y  =  415 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     i++ ; 
 }
 else if (i==2) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
      SDL_BlitSurface ( image ,  NULL ,  screen ,  &dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  220 ; 
     dst2 . y  =  485 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i++ ; 
}
 else if (i==3) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  558 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS ("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i++ ; 
}
 else if (i==4) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  629 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i++ ; 
}
else if (i==5) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  222 ; 
     dst2 . y  =  689 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i=1 ; 
}
}
 while ( c==1)
 { 
	 switch (j) 
	 {
		 case 1 :
		 
		img3 =  IMG_Load( "0...png" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen );  
		 break ; 
		 case 2 :
		 		img3 =  IMG_Load( "9.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=1;
		 break ;  
		 case 3 :
		 		img3 =  IMG_Load( "8.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=2 ;
		 break ;  
		 case 4 :
		 		img3 =  IMG_Load( "7.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=3;
		 break ;  
		 case 5 : 
		 		img3 =  IMG_Load( "6.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=4 ; 
		 break ; 
		 
		 
		 
		 
	 }





     break ; 
     
     case SDLK_UP : 
    if (menu==1)
    {  if (i==3) 
     { 
		 	     image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
		 img  =  IMG_Load( "scroll.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  220 ; 
     dst1 . y  =  415 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     i-- ;  
 }
 else if (i==4) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  485 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i-- ; 
}
 else if (i==5) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  558 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i-- ; 
}
  else if (i==1) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  629 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     i=5;    
} 
else if (i==2) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  689 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	 i-- ;              
}
}
 if ( c==1)
 {
	 switch (j) 
	 {
		 case 1 :
		 
		img3 =  IMG_Load( "1.png" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen );  
     j=2 ; 
		 break ; 
		 case 2 :
		 		img3 =  IMG_Load( "2.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=3 ;
		 break ;  
		 case 3 :
		 		img3 =  IMG_Load( "3.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=4;
		 break ;  
		 case 4 :
		 		img3 =  IMG_Load( "4.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     j=5;
		 break ;  
		 case 5 : 
		 		img3 =  IMG_Load( "5.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     
		 break ; 
		 default : j++ ; 
		 break ; 
		 
		 
		 
		 
	 }
 } 








   break ; 
   
   case SDLK_SPACE : 
   
   if (i==2)
     { 
		 	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
		 img  =  IMG_Load( "ng.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  251 ; 
     dst1 . y  =  414 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     		 img  =  IMG_Load( "ng1.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  678 ; 
     dst1 . y  =  241 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen );  
    k=1 ; 

 }
 else if (i==3) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "continue.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  256 ; 
     dst2 . y  =  484 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
}
 else if (i==4) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "options.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  268 ; 
     dst2 . y  =  558; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     switch(j) 
    {
		
		 case 1 :
		 
		img3 =  IMG_Load( "1.png" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen );  
		 break ; 
		 case 2 :
		 		img3 =  IMG_Load( "2.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
   
		 break ;  
		 case 3 :
		 		img3 =  IMG_Load( "3.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
		 break ;  
		 case 4 :
		 		img3 =  IMG_Load( "4.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
		 break ;  
		 case 5 : 
		 		img3 =  IMG_Load( "5.jpg" ); 
     if  ( img3  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst3 . x  =  0 ; 
     dst3 . y  =  0 ; 
     dst3 . w  =  img3 -> w ; 
     dst3 .h  =  img3 -> h ; 
          SDL_BlitSurface ( img3 ,  NULL ,  screen ,  & dst3 ); 
     SDL_FreeSurface ( img3 ); 
     SDL_Flip ( screen ); 
     
 }
     c=1 ; 
     	menu=0 ;  
     	break ;

     
}
 else if (i==5) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "credit.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  272 ; 
     dst2 . y  =  624 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
          SDL_Delay(500) ; 
     	 		 img1  =  IMG_Load( "Credits.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  0 ; 
     dst2 . y  =  0; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
               if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("G.MP3") ; 
     Mix_PlayMusic(music,1) ; 
}
else if (i==1) 
 {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "exit.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  306 ; 
     dst2 . y  =  688 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     SDL_Delay(1500) ; 
     done=1 ; 
}
else if (i==0) 
 {
       image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
               if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ;    
     i=1; 
  
}
break ; 

case SDLK_LEFT : 
if((i==2)&&(k==1))
{

    img  =  IMG_Load( "cadre.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  1179 ; 
     dst1 . y  =  560 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen );  
                    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ;    
  
     i=0 ; 
 }
     break ; 
     
 
 case SDLK_RIGHT : 
if((i==2)&&(k==1)) {

    img  =  IMG_Load( "cadre.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  823 ; 
     dst1 . y  =  560; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen );    
                    if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ;    
   
  }
     break ; 
     

  
}
     case SDL_MOUSEMOTION : 
      if (event.motion.x > 220 && event.motion.x < 399 && event.motion.y > 415 && event.motion.y < 445)
      {
		 		 	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
		 img  =  IMG_Load( "scroll.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  220 ; 
     dst1 . y  =  415 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ;  
		  
	  }
	    if (event.motion.x > 220 && event.motion.x < 386 && event.motion.y > 485 && event.motion.y < 515)
	    { 
				      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
      SDL_BlitSurface ( image ,  NULL ,  screen ,  &dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  220 ; 
     dst2 . y  =  485 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
			
			}
			
		    if (event.motion.x > 220 && event.motion.x < 361 && event.motion.y > 558 && event.motion.y < 588)
{ 
		      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  558 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	}	
			    if (event.motion.x > 220 && event.motion.x < 358 && event.motion.y > 629 && event.motion.y < 659)
	
	{
			      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  221 ; 
     dst2 . y  =  629 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ; 
		
		}
		
		if (event.motion.x > 220 && event.motion.x < 292 && event.motion.y > 689 && event.motion.y < 719 )
					    
					     {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "scroll.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  222 ; 
     dst2 . y  =  689 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("C.mp3") ; 
     Mix_PlayMusic(music,1) ;  
							 
							 }
							 
							 
							 break ; 
		case SDL_MOUSEBUTTONUP :
		
		if(event.button.button == SDL_BUTTON_RIGHT) 
		{
			x=event.button.x ; 
			y=event.button.y ; 
		}
		 
		 if (event.button.x > 220 && event.button.x < 399 && event.button.y > 415 && event.button.y < 445)
		 {
			  image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
		 img  =  IMG_Load( "ng.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  251 ; 
     dst1 . y  =  414 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     		 img  =  IMG_Load( "ng1.png" ); 
     if  ( img  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst1 . x  =  678 ; 
     dst1 . y  =  241 ; 
     dst1 . w  =  img -> w ; 
     dst1.h  =  img -> h ; 
          SDL_BlitSurface ( img ,  NULL ,  screen ,  & dst1 ); 
     SDL_FreeSurface ( img );
     SDL_Flip ( screen );   
			 }
		
	    if (event.button.x > 220 && event.button.x < 386 && event.button.y > 485 && event.button.y < 515)
	    {
			      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "continue.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  256 ; 
     dst2 . y  =  484 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
		}
		
			    if (event.button.x > 220 && event.button.x < 361 && event.button.y > 558 && event.button.y < 588)
{ 
	  image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "options.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  268 ; 
     dst2 . y  =  558; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
	}	
			    if (event.button.x > 220 && event.button.x < 358 && event.button.y > 629 && event.button.y < 659)
	
	{
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "credit.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  272 ; 
     dst2 . y  =  624 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
          SDL_Delay(500) ; 
     	 		 img1  =  IMG_Load( "Credits.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  0 ; 
     dst2 . y  =  0; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
               if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("G.MP3") ; 
     Mix_PlayMusic(music,1) ; 
		}
		
		if (event.button.x > 220 && event.button.x < 292 && event.button.y > 689 && event.button.y < 719 )
					    
					     {
	      image  =  IMG_Load( "Back.jpg" ); 
     if  ( image  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst . x  =  0 ; 
     dst . y  =  0 ; 
     dst . w  =  image -> w ; 
     dst.h  =  image -> h ; 
          SDL_BlitSurface ( image ,  NULL ,  screen ,  & dst ); 
     SDL_FreeSurface ( image ); 
     SDL_Flip ( screen ); 
     
	 		 img1  =  IMG_Load( "exit.png" ); 
     if  ( img1  ==  NULL )  { 
         printf ( "Can not load image of tux: %s \n " , SDL_GetError ()); 
         exit ( 1 ); 
     } 
     dst2 . x  =  306 ; 
     dst2 . y  =  689 ; 
     dst2 . w  =  img1 -> w ; 
     dst2 .h  =  img1 -> h ; 
          SDL_BlitSurface ( img1 ,  NULL ,  screen ,  & dst2 ); 
     SDL_FreeSurface ( img1 ); 
     SDL_Flip ( screen ); 
          if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1) 
     { 
		 printf("Error \n ") ; 
		 }
     music = Mix_LoadMUS("S.mp3") ; 
     Mix_PlayMusic(music,1) ; 
     SDL_Delay(1500) ; 
     done=1 ; 
							 
							 }
							 
							 
							 break ;
		
		
             
		 }
             
             } 
         }
	 } 
 
     return  0 ; 
 }



