#include <stdio.h>
#include <stdlib.h>


int main()
{
char lista[5][30] , pesquisa[30];
int i;

printf ("Preencha uma lista com 5 nomes \n\n");

for (i=0;i<5;i++)
{
printf ("\n NOME %d : ",i+1);
fgets (lista[i],30,stdin);
}
printf ("\n\n");
for (i=0;i<5;i++)
{
printf (" [%d] = %s",i+1,lista[i]);
}

printf ("\n\n QUE NOME VOCE PROCURA ? ");
fgets(pesquisa,30,stdin);

for (i=0;i<5;i++)
{
if (strcmp(pesquisa,lista[i])==0)
{
printf("\n O elemento %s esta na posicao : %d \n",pesquisa,i+1);
}
}
}
