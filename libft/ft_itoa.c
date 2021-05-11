/* Return value The string representing the integer. NULL if the allocation fails. */
/*External functs. malloc */
/*Description Allocates (with malloc(3)) and returns a string representing the integer received as an argument. */
/*Negative numbers must be handled.*/

#include <malloc.h>

int     how_many_digits(int n)
{
    int digits;

    digits = 1;
    while (n >= 10)
    {
        digits++;
        n = n / 10;
    }
    return (digits);
}

char    *ft_itoa(int n)
{
    char    *str;
    int     isneg;
    int     strlen;

    strlen = 0;
    isneg = 0;
    if (n < 0)
    {
        isneg = 1;
        strlen++;
        n = -n;
    }
    strlen += how_many_digits(n);
    str = (char*)malloc(strlen + 1);
}
