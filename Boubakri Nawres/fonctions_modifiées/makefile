
prog:main.o init_entite.o pos_alea.o afficher_entite.o dep_va_x.o anim_entite_droite.o anim_entite_gauche.o roto.o
	gcc main.o init_entite.o pos_alea.o afficher_entite.o dep_va_x.o anim_entite_droite.o anim_entite_gauche.o roto.o -o prog -lSDL -lSDL_image -lSDL_gfx -g
main.o:main.c
	gcc -c main.c  -lSDL -lSDL_image -g
init_entite.o:init_entite.c
	gcc -c init_entite.c -lSDL -lSDL_image -g
pos_alea.o:pos_alea.c
	gcc -c pos_alea.c -lSDL -lSDL_image -g
afficher_entite.o:afficher_entite.c
	gcc -c afficher_entite.c -lSDL -lSDL_image -g


dep_va_x.o:dep_va_x.c
	gcc -c dep_va_x.c -lSDL -lSDL_image -g
anim_entite_droite.o:anim_entite_droite.c
	gcc -c anim_entite_droite.c -lSDL -lSDL_image -g
anim_entite_gauche.o:anim_entite_gauche.c
roto.o:roto.c
	gcc -c roto.c -lSDL -lSDL_image -lSDL_gfx -g
