#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int nb = -3; 
	int power = 3;

	printf("Input: %d ^ %d, result: %d \n", nb, power, ft_iterative_power(nb, power));
	return(0);
}
