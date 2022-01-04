#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  
char frase[100];
int cont=0,i,x;
printf(" INFORME UMA FRASE QUALQUER : ");
fgets (frase , 100 ,stdin);
fflush(stdin);
x=strlen(frase);
  
for (i=0;i<x;i++)
{
if (frase[i]=='a' || frase[i]=='A')
{
cont++;
}
if (frase[i]=='e' || frase[i]=='E')
{
cont++;
}
if (frase[i]=='i' || frase[i]=='I')
{
cont++;
}
if (frase[i]=='o' || frase[i]=='O')
{
cont++;
}
if (frase[i]=='u' || frase[i]=='U')
{
cont++;
}
}
printf("\n Essa frase tem %d vogais",cont);
printf("\n\nPROGRAMA ENCERRADO !!\n\n");
}
