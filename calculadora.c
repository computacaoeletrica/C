#include <stdio.h>
#include <stdlib.h>

int main()
{
  
int op,sair=0;;
float n1,n2,resultado;

do
{
  printf ("= = = = = = = = = = = = = = = = = = = = = CALCULADORA 1.0 = = = = = = = = = = = = = = = = = = = = =\n ");
  printf ("\n 1 - SOMA");
  printf ("\n\n 2 - SUBTRACAO");
  printf ("\n\n 3 - MULTIPLICACAO");
  printf ("\n\n 4 - DIVISAO");
  printf ("\n\n 5 - SAIR\n\n");
  printf ("\nInforme o numero da operacao : ");
  scanf("%d",&op);
  system("cls");
  switch (op)
{
case 1 :
      
  printf ("\nInforme um numero : ");
  scanf("%f",&n1);
  printf ("\nInforme outro numero : ");
  scanf ("%f",&n2);
  resultado = n1+n2;
  printf ("\n RESULTADO : %.2f",resultado);
  break;

case 2 :
      
  printf ("\nInforme um numero : ");
  scanf("%f",&n1);
  printf ("\nInforme outro numero : ");
  scanf ("%f",&n2);
  resultado = n1-n2;
  printf ("\n RESULTADO : %.2f",resultado);
  break;

case 3 :
      
  printf ("\nInforme um numero : ");
  scanf("%f",&n1);
  printf ("\nInforme outro numero : ");
  scanf ("%f",&n2);
  resultado = n1*n2;
  printf ("\n RESULTADO : %.2f",resultado);
  break;

case 4 :

  printf ("\nInforme um numero : ");
  scanf("%f",&n1);
  printf ("\nInforme outro numero : ");
  scanf ("%f",&n2);
  resultado = n1/n2;

if (n2!=0)
{
  printf ("\n RESULTADO : %.2f",resultado);
}
  if(n2==0)
{
  printf ("\n RESULTADO : NAO EXISTE SOLUCAO REAL");
}
  break;

case 5 :
  printf("\nPROGRAMA ENCERRADO!");
  sair=1;
  break;
}
  
if(sair==0)
{
  printf("\n\nDESEJA FAZER UMA NOVA OPERACAO ?");
  printf ("\n 1 - sim");
  printf ("\n 2 - nao\n\n");
  scanf("%d",&op);
if (op==1)
{
  system ("cls");
}
if (op==2)
{
  system ("cls");
  printf("\nPROGRAMA ENCERRADO!");
  op=5;
}}
}while(op!=5);
}
        
