#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ft_memcmp.c"

struct pessoa
{
	char nome[50];
	int idade;
};

int main ()
{
	struct pessoa p1 = {"juX", 27};
	struct pessoa p2 = {"jux", 27};

	int re;

	re = ft_memcmp(&p1, &p2, sizeof(struct pessoa));

	if (re == 0)
		printf("Iguais\n");
	else
		if (re > 0)
			printf("P1 é maior do que P2\n");
		else
			printf("P2 é maior do que P1\n");

	return (0);
}