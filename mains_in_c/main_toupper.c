#include <stdio.h>
#include "ft_toupper.c"

int	main ()
{
	char inp;
	char r;

	inp = 'c';
	printf("Antes: %c", inp);

	r = ft_toupper(inp);

	printf("Depois: %c", r);

	return (0);
}