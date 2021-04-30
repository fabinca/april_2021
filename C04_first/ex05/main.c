#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(void)
{
	char str[] = " -1000 ";
	printf( "%s, %d ", str, ft_atoi_base(str, "01"));
	return (0);
}