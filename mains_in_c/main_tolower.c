#include <stdio.h>
#include "ft_tolower.c"

int	main ()
{
	char inp;
	char r;

	inp = 'C';
	printf("Antes: %c", inp);

	r = ft_tolower(inp);

	printf("Depois: %c", r);

	return (0);
}