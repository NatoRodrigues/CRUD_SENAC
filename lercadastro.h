#include <stdlib.h>
#include "stdio.h"

int lercadastro(){
  int Codigo = 9999;
  printf("\nDigite o codigo de confirmação recebido no seu celular : ");
  scanf("%i", &Codigo);
  while (Codigo != 9999){
    printf("\n\nCódigo invalido, tente novamente");
    printf("\nReenviando código de confirmação no SMS do seu smartphone : ");
     scanf("%i", &Codigo);
    }
  if(Codigo == 9999){
    printf("\nCódigo digitado corretamente. Cadastro verificado...");
  }

   
  return Codigo;
}