#include <stdio.h>
#include <stdlib.h>

int main()
{
int vetor[10],aux,i,j;

for(i=0;i<10;i++)
{
scanf("%d",&vetor[i]);
}
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if (vetor[i]<vetor[j])
{
aux=vetor[i];
vetor[i]=vetor[j];
vetor[j]=aux;
}

28

}
}
printf("\n\n Sequencia crescente : ");
for(i=0;i<10;i++)
{
printf (" %d ",vetor[i]);
}

printf("\n\n Sequencia descrescente : ");
for(i=10-1;i>=0;i--)
{
printf (" %d ",vetor[i]);
}
printf ("\n");

}
