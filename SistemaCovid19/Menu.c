#include <stdio.h>
#include "Registration.h"
#include "Consulta.h"
#include "Exclusao.h"

void menu()
{
  int op;

  do
  {

    printf(" Selecione abaixo a operação desejada:\n\n");
    printf(" 1 - NOVO cadastro\n");
    printf(" 2 - CONSULTAR cadastro\n");
    printf(" 3 - EXCLUIR cadastro\n");
    printf(" 4 - SAIR\n");
    printf(" Opcao: ");
    scanf("%d", &op);

    if ((op < 1) || (op > 4))
    {
      printf(">< Opção inválida. Tente novamente. ><\n\n");
      continue;
    }

    if (op == 1)
    {
      printf("\nCriando novo cadastro.\n");
      registration();
    }

    if (op == 2)
    {
      printf("\nConsultando cadastro.\n");
      consultar();
    }

    if (op == 3)
    {
      printf("\nExcluindo cadastro.\n");
      excluir();
    }

  } while (op != 4);
  printf("\nSaindo do cadastro.\n");
}
