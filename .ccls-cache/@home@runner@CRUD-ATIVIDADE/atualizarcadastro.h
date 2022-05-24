#include <stdio.h>
int atualizarcadastro( int cod ){
int novocadastro;
int Codigo;


 
  printf("\nDigite sua antiga senha: ");
  scanf("%d", &Codigo);
  while (Codigo != 4002){
     printf("\nSenha invalida. Tente novamente: ");
        scanf("\n\t%d", &Codigo);
    }
  printf("\nRepita novamente sua senha antiga: ");
    scanf("%d", &Codigo);
  printf("\nDigite uma nova senha de registro: ");
  scanf("%d", &novocadastro);

    printf("\nSeu cadastro foi alterado com sucesso");

  return cod;
  }