#include <stdio.h>
#include <stdlib.h>

int main()
{
  
char LISTA[5][30];
int i;

printf("Digite 5 nomes : \n\n");
  
for (i=0;i<5;i++)
{
printf("\nNOME %d : ",i+1);
fgets(LISTA[i],30,stdin);
fflush (stdin);
}
  
printf("\nOs nomes que voce digitou : ");
printf ("\n");
  
for (i=0;i<5;i++)
{
printf ("\n[%d] = %s",i+1,LISTA[i]);
}
}
