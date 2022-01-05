#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  float a,b,c,delta,x1,x2;
  printf ("Informe o valor do a : ");
  scanf("%f",&a);
  printf ("\nInforme o valor do b : ");
  scanf("%f",&b);
  printf ("\nInforme o valor do c : ");
  scanf("%f",&c);
  delta = ((pow(b,2))-(4*a*c));
  
if (delta < 0 )
{
  printf ("\nEssa equacao nao possui solucoes reais");
}
if (delta == 0)
{
  x1= ((-b+sqrt(delta))/2*a);
  printf ("\n x1 : %.2f",x1);
}
if (delta > 0)
{
  x1= ((-b+sqrt(delta))/2*a);
  x2= ((-b-sqrt(delta))/2*a);
  printf ("\n x1 : %.2f",x1);
  printf ("\n x2 : %.2f\n\n",x2);
}

printf("PROGRAMA ENCERRADO ! ");
  
}
