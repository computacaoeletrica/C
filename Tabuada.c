#include <stdio.h>
#include <stdlib.h>

int main()
{
int opcao,i,j;
  
printf ("Que tabuada voce quer vizualizar ? ");
scanf ("%d",&opcao);
  
for (i=0;i<10;i++)
{
printf ("%d x %d = %d ", i+1 , opcao , opcao*(i+1));
printf("\n");
}
}
