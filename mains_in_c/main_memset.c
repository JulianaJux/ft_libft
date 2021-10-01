#include "ft_memset.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char str[50] = "Exemplo de string em C";
	puts(str);

	ft_memset(str, '!', 7);

	puts(str);

	
	return 0;
} 
