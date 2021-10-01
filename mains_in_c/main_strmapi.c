# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "ft_strmapi.c"
#include "ft_toupper.c"

int main ()
{
	char const *s;
	char *f;
	
	s = "meunomeéjux";
	f = ft_toupper(s);

	printf("ficou assim: %s", f);
}
