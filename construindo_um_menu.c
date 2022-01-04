#include <stdio.h>
#include <stdlib.h>

int main()
{
  
int op ;

do
{
  printf ("= = = = = = = = = = = = = = = = = = = = = MENU INTERATIVO = = = = = = = = = = = =
  = = = = = = = = =\n ");
  printf ("\n 1 - OPCAO 1");
  printf ("\n\n 2 - OPCAO 2");
  printf ("\n\n 3 - SAIR\n");
  printf("\n Escolha sua opcao : ");
  scanf("%d",&op);
          
switch (op)
{
  case 1 : printf ("\nVOCE ESCOLHEU A OPCAO 1 "); break ;

  case 2 : printf ("VOCE ESCOLHEU A OPCAO 2"); break;

  case 3 : printf ("PROGRAMA ENCERRADO !"); break ;
}
  printf("\n\nDeseja voltar para o menu ?");
  printf ("\n 1 - sim");
  printf ("\n 2 - nao\n\n");
  scanf("%d",&op);
          
if (op==1)
{
system ("cls");
}
if (op==2)
{
op=3;
}
}while(op!=3);
}
