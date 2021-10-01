#include <stdio.h>
#include <string.h>
#include "ft_substr.c"


int main () 
{
   char todaela[20] = "OlaEusouaJux";
   unsigned int começo;
   começo = 'a';
   char *ret;

   ret = ft_substr(todaela, começo, 20);

   printf("The substring is: %s\n", ret);
   
   return(0);
}
