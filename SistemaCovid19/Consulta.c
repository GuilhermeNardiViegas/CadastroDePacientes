#include <stdio.h>
#include <stdlib.h>
#include "Paciente.h"

void consultar()
{
  FILE *arquivo;
  Paciente paciente;

  arquivo = fopen("cadastro.bin", "rb");
  fread(&paciente, sizeof(paciente), 1, arquivo);

  printf("\n Nome: %s\n", paciente.nome);
  printf(" email: %s\n", paciente.email);
  printf(" Data de nascimento: %s\n", paciente.nascimento);
  printf(" CPF: %s\n", paciente.cpf);
  printf(" Telefone: %s\n", paciente.telefone);
  printf(" Endereço: %s\n", paciente.endereco);
  printf(" CEP: %s\n", paciente.cep);
  printf(" Cidade: %s\n", paciente.cidade);
  printf(" UF: %s\n", paciente.estado);
  printf(" Data diagnostico: %s\n", paciente.data);
  printf(" Comorbidade: %s\n", paciente.comorbidades);

  printf("------------------------------------------------------------------------------------\n");

  fclose(arquivo);
  free(arquivo);
  free(&paciente);
}
