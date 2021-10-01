#include "ft_strdup.c"
#include <stdio.h>

int main ()
{

    char string[] = "Jux diz, oi";
    char *r;

    r = ft_strdup(string);

    printf("Duplicar: '%s' ficando '%s', \n",
            string,
            r);
}
