#include <stdio.h>
#include <stdlib.h>
#include "Paciente.h"

void registration()
{
  FILE *log;
  Paciente pat;

  log = fopen("cadastro.bin", "wb+");

  printf("\nCriando NOVO cadastro... \n\n");
  printf("----------- CADASTRO DE PACIENTES ---------\n\n\n");

  fflush(stdin); // não retirar

  printf("Nome completo (sem acentos): ");
  gets(pat.nome);
  fflush(stdin);

  printf("email: ");
  scanf("%s", pat.email);
  fflush(stdin);

  printf("Data de nascimento (dd/mm/aaaa): ");
  scanf("%s", pat.nascimento);
  fflush(stdin);

  printf("CPF (xxx.xxx.xxx-xx): ");
  scanf("%s", pat.cpf);
  fflush(stdin);

  printf("Telefone (xx) xxxxx-xxxx: ");
  scanf("%s", pat.telefone);
  fflush(stdin);

  printf("Endereco: ");
  gets(pat.endereco);
  fflush(stdin);

  printf("CEP (xxxxx-xxx): ");
  scanf("%s", pat.cep);
  fflush(stdin);

  printf("Cidade: ");
  gets(pat.cidade);
  fflush(stdin);

  printf("Estado (UF): ");
  scanf("%s", pat.estado);
  fflush(stdin);

  printf("\n---------------- CONSULTA -----------------\n\n");
  printf("Data diagnostico (dd/mm/aaaa): ");
  scanf("%s", pat.data);
  fflush(stdin);

  printf("Possui comorbidade? (Deixar em branco em caso negativo): ");
  gets(pat.comorbidades);
  fflush(stdin);

  int success = fwrite(&pat, sizeof(pat), 1, log);
  if (success != 1)
  {
    printf("\nFalha ao gravar cadastro\n");
  }
  else
  {
    printf("\nRegistro Completo!\n");
  }

  fclose(log);

  free(log);
  free(&pat);
}
