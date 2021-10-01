#include <stdio.h>
#include <stdlib.h>
#include "ft_strtrim.c"

int main ()
{
	char *str1 = "abcdefabcdefabacba";
	char *cor = "a";
	printf("strim: %s", ft_strtrim(str1, cor));

	return (0);
}

/*Oi, eu sou a Jux*/
/*aaaabbbbccccaaaa*/
/*ave mariah*/