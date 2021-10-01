#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_atoi.c"

int main () 
{
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "hello world");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

}