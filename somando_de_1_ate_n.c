#include <stdio.h>
#include <stdlib.h>

int main()
{
  
int cont,n,i;

printf ("Informe um numero : ");
scanf("%d",&n);
for (i=0;i<n;i++)
{
cont=cont+(i+1);
}
printf ("A soma de todos os termos da sequencia de 1 ate %d e : %d\n\n",n,cont);
printf ("PROGRAMA ENCERRADO !!\n\n");
}
