#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_memchr.c"

int main ()
{
	char str[50] = "Exemplo de tring em C";
	char *p;
	p = (char *) ft_memchr(str, 's', strlen(str));

	if (p != NULL)
		printf("Encontrado! Posição: %ld\n", (p-str+1));
	else
		printf("Não encontrado!\n");

	return (0);
}