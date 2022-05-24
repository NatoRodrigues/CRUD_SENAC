#include <stdio.h>
#include "criarcadastro.h"
#include "lercadastro.h"
#include "atualizarcadastro.h"
#include "menu.h"
int main(void) {
 int i;
 int opcao;
 int Codigo;
 int novocadastro;
 int op;
  op = 0;
op = menu();
  
do{switch (op){
    case 1 :
      criarcadastro(i); 
      break;
    case 2 :
      lercadastro(Codigo);
      break;
    case 3 :
      atualizarcadastro(novocadastro);
      break;
    case 4 :
    default :
      printf("\n Cadastro deletado com sucesso\n");
  }
  return 0;
}while(op > 4);
   scanf("%i", &op);
  printf("Digite uma opção valida");
   return 0;
  }