#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char criarcadastro(i){
  char nome[100];
  char email[100];
  char senha[100];
   printf("Digite seu nome: ");
        scanf(" %s", nome);
     
     printf("\nDigite seu email: ");
        scanf(" %s", email);
  
     printf("\ndigte sua senha: ");
        scanf(" %s", senha);


  printf("\nSeus dados são: %s %s %s", nome, email, senha);

  return i;
  }