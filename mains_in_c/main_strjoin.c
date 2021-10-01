#include <stdio.h>
#include <string.h>
#include "ft_strjoin.c"

int main ()
{
	char  *s1;
	char  *s2;
	char  *nova;

	s1 = "Oieu";
	s2 = "souaJux";
	printf("antes: %s e %s \n", s1, s2);

	nova = ft_strjoin(s1, s2);
	printf("depois: %s \n", nova);

	return (0);
}
