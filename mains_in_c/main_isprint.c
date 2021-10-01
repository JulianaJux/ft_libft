#include "ft_isprint.c"
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int teste1 = '\n';
	int teste2 = '2';
	int teste3 = 'D';

	if (ft_isprint(teste1))
	{
		printf("teste1 = |%c| achouuu\n", teste1);
	}
	else
	{
		printf("teste1 = |%c| não achouu\n", teste1);
	}
	if (ft_isprint(teste2))
	{
		printf("teste2= |%c| achouuu\n", teste2);
	}
	else
	{
		printf("teste2 = |%c| não achouu\n", teste2);
	}
		if (ft_isprint(teste3))
	{
		printf("teste3= |%c| achouuu\n", teste3);
	}
	else
	{
		printf("teste3 = |%c| não achouu\n", teste3);
	}
	return (0);
}
