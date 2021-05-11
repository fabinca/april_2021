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

void    putnbr_to_str(int n, char *str, int i)
{
    if (n >= 10)
    {
        putnbr_to_str(n / 10, str, i - 1);
        putnbr_to_str(n % 10, str, i);
    }
    else
    {
        str[i] = n + '0';
    }
}

char    *ft_itoa(int n)
{
    char    *str;
    int     i;
    int     isneg;
    int     strlen;

    if (n == -2147483648)
    {
        str = (char*)malloc(12);
        str = "-2147483648";
        return (str);
    }
    i = 0;
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
    if (isneg)
    {
        str[i] = '-';
        i++;
    }
    putnbr_to_str(n, str, strlen - 1);
    str[strlen] = 0;
    return (str);
}
