#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char usuario[30],usuario1[30];
char senha[30],senha1[30];
int op;

printf ("= = = = = = = = = = = TELA DE LOGIN = = = = = = = = = =");
printf ("\n\nVOCE JA TEM UMA CONTA ? \n\n 1 - SIM\n 2 - NAO\n\n");
scanf ("%d",&op);
if (op==1)
{
system("cls");
printf ("= = = = = = = = = = = TELA DE LOGIN = = = = = = = = = =");
printf ("\n\nUsuario : ");
scanf ("%s",&usuario1);
printf ("\n\nSenha : ");
scanf ("%s",&senha1);
if ((strcmp(usuario,usuario1)==0) && (strcmp(senha,senha1)==0))
{
printf ("\n\nCONTA RECONHECIDA !!\n");
}
else
{
printf ("\n\nDADOS INCORRETOS!!\n\n");
}
}
if (op==2)
{
system("cls");
printf ("\n\nCrie um nome de usuario : ");
scanf ("%s",&usuario);
printf ("\n\nCrie uma senha : ");
scanf ("%s",&senha);
system("cls");
printf ("\n CONTA CRIADA COM SUCESSO !! \n\n");
printf ("= = = = = = = = = = = TELA DE LOGIN = = = = = = = = = =");
printf ("\n\nUsuario : ");
scanf ("%s",&usuario1);
printf ("\n\nSenha : ");
scanf ("%s",&senha1);
if ((strcmp(usuario,usuario1)==0) && (strcmp(senha,senha1)==0))
{
printf ("\n CONTA RECONHECIDA!!\n");
}
else
{
printf ("\nDADOS INCORRETOS !!\n");
}
}
}
