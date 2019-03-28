prog:main.o AffichageObj.o InitObjet.o collisionbb.o collisionti.o collisiontc.o
	gcc main.o AffichageObj.o InitObjet.o collisionbb.o collisionti.o collisiontc.o -o prog -lSDL -lSDL_image -lm -g
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -g

AffichageObj.o:AffichageObj.c
	gcc -c AffichageObj.c -lSDL -lSDL_image -g
InitObjet.o:InitObjet.c 
	gcc -c InitObjet.c -lSDL -lSDL_image -g  
collisionbb.o:collisionbb.c 
	gcc -c collisionbb.c -lSDL -lSDL_image -g  
collisionti.o:collisionti.c 
	gcc -c collisionti.c -lSDL -lSDL_image -g 
collisiontc.o:collisiontc.c 
	gcc -c collisiontc.c -lSDL -lSDL_image -g 
