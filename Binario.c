#include <stdio.h>
#include <stdlib.h>

int main()
{
  
int num,binario[100],tamanho=0,i;
printf ("Digite um numero : ");
scanf("%d",&num);
  
do
{
  binario[tamanho]=num%2;;
  num=num/2;
  tamanho++;
}while(num>=2);
if (num>0)
{
  binario[tamanho]=1;
}
printf("\n\nESSE NUMERO CONVERTIDO PARA BINARIO FICA :");
for (i=tamanho;i>=0;i--)
{
printf(" %d",binario[i]);
}
printf("\n\nPROGRAMA ENCERRADO !");
}
