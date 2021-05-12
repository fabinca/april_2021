#include <stdio.h>
#include <string.h>

void *ft_memset(void *str, int c, size_t n);
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   ft_memset(str,'0',7);
   puts(str);
   
   return(0);
}
