#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  
int opcao,jogadadocomputador;

printf ("ESCOLHA SUA OPCAO : \n");
printf ("\nPEDRA (1) \nPAPEL (2) \nTESOURA(3)\n\n");
scanf ("%d",&opcao);
srand (time(NULL));
jogadadocomputador=rand()%2;
if (jogadadocomputador==0)
{
printf ("\nA MAQUINA ESCOLHEU PEDRA !!");
}
if (jogadadocomputador==1)
{
printf ("\nA MAQUINA ESCOLHEU PAPEL !!");
}
if (jogadadocomputador==2)
{
printf ("\nA MAQUINA ESCOLHEU TESOURA !!");
}

if (opcao==1)
{
if (jogadadocomputador==1)
{
printf("\n\nVOCE PERDEU !!");
}
if (jogadadocomputador==2)
{
printf("\n\nVOCE PERDEU !!");
}

}
if (opcao==2)
{
if (jogadadocomputador==0)
{
printf("\n\nVOCE GANHOU !!");
}
if (jogadadocomputador==2)
{
printf("\n\nVOCE PERDEU !!");
}
}
if (opcao==3)
{
if (jogadadocomputador==0)
{
printf("\n\nVOCE PERDEU !!");
}
if (jogadadocomputador==1)
{
printf("\n\nVOCE GANHOU !!");
}
}

if ((jogadadocomputador+1)==opcao)
{
printf ("\n\nHOUVE UM EMPATE ");
}
}
