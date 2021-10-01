#include "ft_bzero.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main ()
{
	char str[50] = "Jux testando a bzero";
	puts(str);

	ft_bzero(str, 1);

	puts(str);

	
	return 0;
}
