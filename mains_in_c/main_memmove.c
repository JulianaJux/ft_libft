#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_memmove.c"


void	imprime(int *v, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%d, ", v[i]);
	printf("\n");
}

int main ()
{
	int x[5] = {-1,-1,-1,-1,-1};
	int v[5] = {1,2,3,4,5};

	imprime(x, 5);
	ft_memmove(x, v, 4);
	imprime(x, 5);
	ft_memmove(x, v, 20);
	imprime(x, 5);


	return (0);
}
/*4bytes cada int*/