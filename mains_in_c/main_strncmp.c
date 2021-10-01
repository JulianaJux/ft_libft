#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main(void)
{
  char palavra1[100], palavra2[100];
  int resultado;
  
  printf("entre com uma palavra: ");
  gets(palavra1);
  printf("entre outra palavra: ");
  gets(palavra2);
  
  resultado = ft_strncmp(palavra1, palavra2, 100);
  
  if (resultado == 0)
    printf("igual\n");
  else if (resultado > 0)
    printf("o primeiro e' maior\n");
  else
    printf("o segundo e' maior\n");
}
