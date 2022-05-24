#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char criarcadastro(i){
  char nome[1000];
  char email[1000];
  char senha[1000];
   printf("Digite seu nome: ");
        scanf(" %s", nome);
     ///favor não dar espaço ao digitar nome
     printf("\nDigite seu email: ");
        scanf(" %s", email);
  
     printf("\ndigte sua senha: ");
        scanf(" %s", senha);


  printf("\nSeus dados são: \n %s \n %s \n %s", nome, email, senha);


  return i;
  }