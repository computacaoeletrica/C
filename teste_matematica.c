#include <stdio.h>
#include <stdlib.h>

int main()
{
  
int nota=0;
char resposta[3] ;
printf ("\n\n\t\t\t = = = = = = = TESTE DE MATEMATICA = = = = = = = = = ");
printf("\n\n 1 - QUANTO E 2+2 ? \n");
printf ("\n (A) 2");
printf ("\n (B) 3");
printf ("\n (C) 4");
printf ("\n (D) 5\n\n");
scanf("%s",&resposta);
system("cls");
if ((strcmp(resposta,"C")==0) || (strcmp(resposta,"c")==0))
{
nota=nota+5;
}
printf ("\n\n\t\t\t = = = = = = = TESTE DE MATEMATICA = = = = = = = = = ");
printf("\n\n 1 - QUANTO E 7+2 ? \n");
printf ("\n (A) 9");
printf ("\n (B) 8");
printf ("\n (C) 7");
printf ("\n (D) 6\n\n");
scanf("%s",&resposta);
system("cls");
if ((strcmp(resposta,"A")==0) || (strcmp(resposta,"a")==0))
{
nota=nota+5;
}
printf ("\n\n SUA NOTA FOI : %d",nota);
}
