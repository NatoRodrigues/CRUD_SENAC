#include <stdlib.h>
#include "stdio.h"

int lercadastro(){
  int Codigo = 4002;
  printf("\nDigite o codigo de confirmação recebido no seu celular : ");
  scanf("%i", &Codigo);
  while (Codigo != 4002){
    printf("\n\nCódigo invalido, tente novamente");
    printf("\nReenviando código de confirmação no SMS do seu smartphone : ");
     scanf("%i", &Codigo);
    }
  if(Codigo == 4002){
    printf("\nCódigo digitado corretamente. Cadastro verificado...");
  }

   
  return Codigo;
}