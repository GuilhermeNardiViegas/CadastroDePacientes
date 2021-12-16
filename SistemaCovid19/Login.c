#include <stdio.h>
#include <string.h>
#include "Menu.h"

void login()
{
  char login[15] = "admin";
  char login1[15];
  char password[15] = "senha";
  char password1[15];
  int op;

  do
  {
    printf("LOGIN: ");
    scanf("%s", login1);
    printf("PASSWORD: ");
    scanf("%s", password1);

    if (strcmp(login, login1) != 0 || strcmp(password, password1) != 0)
    {
      printf(">>> Usuario e/ou senha incorreto(s). Por favor, tente de novo.<<<\n\n");
    }
  } while (strcmp(login, login1) != 0 || strcmp(password, password1) != 0);

  printf("\nLogin efetuado com sucesso!\n\n");

  menu();
}
