#include "ft_strlcpy.c"
#include <stdio.h>

void test(int size)
{
    char string[] = "Jux diz, oi";
    char buffer[11];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copiado '%s' para '%s', tamanho %d\n",
            string,
            buffer,
            r
          );
}
int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
