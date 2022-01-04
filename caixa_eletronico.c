#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor,n50=0,n20=0,n10=0,n2=0;
int op=0;
printf ("Informe o valor que deseja retirar : ");
scanf ("%d",&valor);
if (valor%2==0)
{
if (valor>=50)
{
n50=valor/50;
valor = valor - (n50*50);
}
if (valor<50 && valor>=20)
{
n20 = valor/20;
valor = valor - (n20*20);
}
if (valor<20 && valor>=10)
{
n10 =valor/10;
valor = valor - (n10*10);
}
if (valor<10 && valor>=2)
{
n2 = valor/2;
valor = valor - (n2*2);
}
printf ("\n\n VOCE VAI RECEBER : \n\n");
printf ("\n %d notas de 50",n50);
printf ("\n %d notas de 20",n20);
printf ("\n %d notas de 10",n10);
printf ("\n %d notas de 2\n\n",n2);
printf("PROGRAMA ENCERRADO !! ");
}

if (valor%2==1)
{
printf ("\n\nPROGRAMA ENCERRADO !!");
printf ("\n\nO CAIXA SO ACEITA VALORES PARES \n\n");
}

}
