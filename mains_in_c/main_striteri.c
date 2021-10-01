#include <stdio.h>

void ft_mystriteri(const char *s, int (*f)(const char *format, ...))
{
    f(s);
}

int main()
{
    ft_mystriteri("Pega eu PRINTF", &printf);
    return (0);
}