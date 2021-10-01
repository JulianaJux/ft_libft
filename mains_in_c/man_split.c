#include <stdio.h>
#include <stdlib.h>
#include "ft_split.c"

int main ()
{
	const char *str1 = "abcdefabcdefabacba";
	char cor = 'a';
	printf("split: %s", **ft_split(str1, cor));

	return (0);
}