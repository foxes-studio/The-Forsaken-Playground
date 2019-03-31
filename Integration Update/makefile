menu1:Menu.o animation.o chrono.o collisionbb.o AffichageObj.o InitObjet.o collisiontc.o test.o enigf.o
	gcc Menu.o  animation.o chrono.o collisionbb.o AffichageObj.o InitObjet.o collisiontc.o test.o enigf.o -o menu1 -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -lm -g
Menu.o:Menu.c
	gcc -c Menu.c -lSDL -lSDL_image -lSDL_mixer -g

animation.o:animation.c
	gcc -c animation.c -lSDL -lSDL_image -g
collisionbb.o:collisionbb.c 
	gcc -c collisionbb.c -lSDL -lSDL_image -g 
chrono.o:chrono.c 
	gcc -c chrono.c -lSDL -lSDL_image -lSDL_ttf -g  
InitObjet.o:InitObjet.c 
	gcc -c InitObjet.c -lSDL -lSDL_image -lSDL_ttf -g  
AffichageObj.o:AffichageObj.c 
	gcc -c AffichageObj.c -lSDL -lSDL_image -lSDL_ttf -g  
collisiontc.o:collisiontc.c 
	gcc -c collisiontc.c -lSDL -lSDL_image -lSDL_ttf -g  
test.o:test.c 
	gcc -c test.c -lSDL -lSDL_image -lSDL_ttf -g  
enigf.o:enigf.c 
	gcc -c enigf.c -lSDL -lSDL_image -lSDL_ttf -g  
