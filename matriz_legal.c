#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i , j ,l , c ;
  printf ("Insira o numero de linhas : ");
  scanf ("%d",&l);
  printf ("\nInsira o numero de colunas : ");
  scanf ("%d",&c);
  int matriz[l][c];
  printf ("\nInforme os elementos da matriz : \n\n");

for (i=0;i<l;i++)
{
 for (j=0;j<c;j++)
  {
  scanf("%d",&matriz[i][j]);
  }
  printf("\n");
}
printf (" Essa e a matriz que voce informou !\n\n");
  
for (i=0;i<l;i++)
 {
 for (j=0;j<c;j++)
  {
  printf(" %d ",matriz[i][j]);
  }
  printf("\n");
 }
printf("\n\nPrograma encerrado ! ");
}
