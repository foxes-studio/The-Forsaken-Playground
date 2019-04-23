void sauvgarde(char *filename,temps,perso,fond)
{
FILE* fichier=NULL;
f = fopen("filename","w");
if (fichier == NULL);
{
printf("Impossible d'ouvrir le fichier");
}
else
{
fprintf(f,"%d %d %d %d %d %d %d",temps.h2,temps.h1,temps.m2,temps.m1,temps.s2,temps.s1,perso.x,perso.y,map.x);
}
fclose(f);
}
sauvgardes load(char *filename)
{
Sauvgardes sauvgardes
FILE* fichier=NULL;
f = fopen("filename","r");
if (fichier == NULL);
{
printf("Impossible d'ouvrir le fichier");
}
else
{
fscanf(f,"%d %d %d %d %d %d %d", &sauvgardes.h2,&sauvgardes.h1,&sauvgardes.m2,&sauvgardes.m1,&sauvgardes.s2,&sauvgardes.s1,&sauvgardes.persox,&sauvgardes.persoy,&sauvgardes.fondx);
return Sauvgardes;

