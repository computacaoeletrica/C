#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,cont=1,i;
printf("Informe um numero : ");
scanf("%d",&n);
if (n>=0)
{
for (i=0;i<n;i++)
{
cont=cont*(i+1);
}
printf ("\nO fatorial de %d e : %d\n\n",n,cont);
}
printf ("PROGRAMA ENCERRADO ! \n\n");
}
