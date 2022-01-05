#include <stdio.h>
#include <stdlib.h>

int main()
{
int cont=-1,i;
float media,soma ;
char para;
float sequencia[100];
printf ("\n Digite a sequencia : ");
do
{
cont++;
scanf ("%f%c",&sequencia[cont],&para);
}while(para!='\n');
for (i=0;i<=cont;i++)
{
soma=soma+sequencia[i];
media=soma/(cont+1);
}
printf ("\n\nMedia : %.2f ",media);
}
