#include <stdio.h>

char    *ft_itoa(int n);
int     main(void)
{    
    printf("%s \n", ft_itoa(-2147483648));
    printf("%s \n", ft_itoa(0));
    printf("%s \n", ft_itoa(2147483647));
    printf("%s \n", ft_itoa(-2147483647));
    return (0);
}
