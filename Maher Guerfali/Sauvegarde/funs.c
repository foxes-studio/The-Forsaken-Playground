#include <stdio.h>
#include  <stdlib.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
 #include <SDL/SDL_mixer.h>
#include "head.h" 

void fichier(char nomfichier[],int *positionFond, int *positionJ  ,int *y , int *score , int *vie , int *running) 
{
FILE*f=NULL;

f=fopen(nomfichier,"w+");

                    if ((f != NULL )||(*running==0))
        {
            fprintf(f,"%d ;%d ; %d ; %d ; %d ",*positionFond,*positionJ, *y ,*score,*vie);
             
            
        }
fclose(f);
        }
void encryption(char nomfichier[],char output[])
{
FILE *fdr,*fdw;
char ch;
	int op;
	
	fdr=fopen(nomfichier,"r");
	fdw=fopen(output,"w");
	
	if(fdr==NULL){
		printf("\nFile does not exist...!\n");
		exit(0);
	}
	ch=fgetc(fdr);
	while(ch!=EOF){
		op=(int)ch;
		op=op+6;
		fprintf(fdw,"%c",op);
		ch=fgetc(fdr);
	}
	fclose(fdw);
	fclose(fdr);
	
}
void decryption(char nomfichier[],char output[])
{
FILE *fdr,*fdw;
int op;
char ch;
fdr=fopen(nomfichier,"r");
	fdw=fopen(output,"w");
if(fdr==NULL){
		printf("\nFile to decyrpt does not exist...!\n");
		exit(0);
	}
ch=fgetc(fdr);
	while(ch!=EOF){
		op=(int)ch;
		op=op-6;
		fprintf(fdw,"%c",op);
		ch=fgetc(fdr);
	}
	fclose(fdw);
	fclose(fdr);
}
 void extraire(char nomfichier[],int *positionFond, int *positionJ , int *y , int *score , int *vie ,int numo) 
 {
 FILE*f=NULL;
int num=1,ok=0;

f=fopen(nomfichier,"r");

if(f!=NULL)
{
while (ok==0)
{
fscanf(f,"%d ; %d ; %d ; %d ; %d ; %d ",&num,positionFond,positionJ,y,score,vie);
if (num==numo)
{
ok=1;
} 
else
{
num++;
}
}
} 
fclose(f) ; 
 }
void calculermap(int positionJ,char *kk)
{
float k;
char cc[10];
k=(positionJ*100)/5120;
 gcvt(k, 4, cc);
strcpy(kk,cc);
strcat(kk," %");
}
void clean_up(SDL_Surface *screen,SDL_Surface *textSurface,TTF_Font *font)
{
    SDL_FreeSurface(screen);
    SDL_FreeSurface(textSurface);
 
    TTF_CloseFont(font);
 
    TTF_Quit();
 
    SDL_Quit();
 
}
