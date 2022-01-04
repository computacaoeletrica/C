#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
char nome[30];
int idade ;
char cidade[30];
} cadastro ;

cadastro pessoa[3];

int main()
{
int i;
for (i=0;i<3;i++)
{
printf (" Nome %d : ",i+1);
fgets (pessoa[i].nome,30,stdin);
printf ("\n Idade %d : ",i+1);
scanf("%d",&pessoa[i].idade);
fflush(stdin);
printf ("\n Cidade %d : ",i+1);
fgets (pessoa[i].cidade,30,stdin);
system("cls");
}
for (i=0;i<3;i++)
{
printf ("\n\n DADOS DA PESSOA %d : \n",i+1);
printf ("\n Nome : %s",pessoa[i].nome);
printf ("\n Idade : %d\n",pessoa[i].idade);
printf ("\n Cidade : %s\n",pessoa[i].cidade);
printf ("\n = = = = = = = = = = = = = = = = = = = =");
}
}

Desafio
