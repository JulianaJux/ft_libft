#include <stdio.h>
#include <stdlib.h>
#include "ft_calloc.c"

int main ()
{
	int *p;
	p = (int *)ft_calloc(5, sizeof(int));
	if (p == NULL)
	{
		printf("Erro: Sem Memória!\n");
		exit(1);
	}
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Digite p [%d]: ", i);
		scanf("%d", &p[i]);
	}
}