#include <stdio.h>

int menu(){
  int opcao;
  opcao=0;
  printf("\n>>>>>> Bem vindo ao APP de Cadastro CRUDE<<<<<<\n");
  printf("\n \t1 - Cadastrar");
  printf("\n \t2 - Verificar cadastro");
  printf("\n \t3 - Atualizar senha de cadastro");
  printf("\n \t4 - Apagar cadastro");
  printf("\n \t -> ");
  scanf("%d", &opcao);
  return opcao;
}