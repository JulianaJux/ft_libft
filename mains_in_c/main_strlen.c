#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int main(void)
{
  char nome[100];
  int comprimento;
  
  printf("Entre seu nome: ");
  gets(nome);
  comprimento = ft_strlen(nome);
  
  printf("Seu nome tem  %d caracteres.\n", comprimento);
}
