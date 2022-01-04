#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int tentativas=1,num,sorte,parar=0;
srand (time (NULL));
sorte = rand()%100;
printf ("\t\t\t\ADIVINHE QUAL E O NUMERO !! OBS : 0 - 100");
do{
printf ("\n\nDIGITE QUAL VOCE ACHA QUE E : ");
scanf("%d",&num);
if (num>sorte)
{
printf("\n\nO numero e menor !! ");
tentativas++;
}
if (num<sorte)
{
printf("\n\nO numero e maior!! ");
tentativas++;
}
if (num==sorte)
{
printf("\n\nParabens , voce acertou em %d tentativas !! ",tentativas);
parar=1;
}
}while(parar==0);

}
