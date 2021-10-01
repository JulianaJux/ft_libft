#include "ft_isascii.c"
#include <stdio.h>
#include <ctype.h>

int main ()
{
	long int teste1 = '/n';
	int teste2 = '2';
	int teste3 = 'D';

	if (ft_isascii(teste1))
	{
		printf("teste1 = |%ld| achouuu\n", teste1);
	}
	else
	{
		printf("teste1 = |%ld| não achouu\n", teste1);
	}
	if (ft_isascii(teste2))
	{
		printf("teste2= |%c| achouuu\n", teste2);
	}
	else
	{
		printf("teste2 = |%c| não achouu\n", teste2);
	}
		if (ft_isascii(teste3))
	{
		printf("teste3= |%c| achouuu\n", teste3);
	}
	else
	{
		printf("teste3 = |%c| não achouu\n", teste3);
	}
	return (0);
}
