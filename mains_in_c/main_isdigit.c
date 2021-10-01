#include "ft_isdigit.c"
#include <stdio.h>
#include <ctype.h>

int main ()
{
	int teste1 = 'd';
	int teste2 = '2';
	int teste3 = 'D';

	if (ft_isdigit(teste1))
	{
		printf("teste1 = |%c| achouuu\n", teste1);
	}
	else
	{
		printf("teste1 = |%c| não achouu\n", teste1);
	}
	if (ft_isdigit(teste2))
	{
		printf("teste2= |%c| achouuu\n", teste2);
	}
	else
	{
		printf("teste2 = |%c| não achouu\n", teste2);
	}
		if (ft_isdigit(teste3))
	{
		printf("teste3= |%c| achouuu\n", teste3);
	}
	else
	{
		printf("teste3 = |%c| não achouu\n", teste3);
	}
	return (0);
}
