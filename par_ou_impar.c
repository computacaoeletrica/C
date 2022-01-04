#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int num , computador ,op;
printf (" ESCOLHA PAR (1) OU IMPAR (2) :");
scanf ("%d",&op);
printf ("\n\n ESCOLHA SEU NUMERO :");
scanf ("%d",&num);
srand (time(NULL));
computador = rand()%10;
printf ("\n SEU NUMERO : %d",num);
printf ("\n O NUMERO DO COMPUTADOR : %d",computador);
if (op==1)
{
if ((num+computador)%2==0)
{
printf ("\n\nVOCE GANHOU !!");
}
else
{
printf ("\n\nVOCE PERDEU !!");
}
}
if (op==2)
{
if ((num+computador)%2==1)
{
printf ("\n\nVOCE GANHOU !!");
}
else
{
printf ("\n\nVOCE PERDEU !!");
}
}
}
