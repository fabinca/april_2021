#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int nb = 0; 
	int power = 1;

	printf("Input: %d ^ %d, result: %d \n", nb, power, ft_recursive_power(nb, power));
	return(0);
}
