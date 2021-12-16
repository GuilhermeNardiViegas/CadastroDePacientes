#include <stdio.h>
#include <stdlib.h>

void excluir()
{
  int result = remove("cadastro.bin");

  if (result != 0)
  {
    printf("\nFalha ao excluir cadastro\n");
  }
  else
  {
    printf("\nCadastro excluido com sucesso!\n");
  }
}