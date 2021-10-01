#include <stdio.h>
#include "ft_strrchr.c"


int main () 
{
   const char str[] = "hello.worl.d";
   int ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}