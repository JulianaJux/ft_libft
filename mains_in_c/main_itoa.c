#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_itoa.c"

int main () 
{
   int val;
   char *str;
   val = 2;

   str = ft_itoa(val);
   printf("String value = %s, Int value = %d\n", str, val);

}