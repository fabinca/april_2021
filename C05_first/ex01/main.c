#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb = 9; 

	printf("Input: %d, result: %d \n", nb, ft_recursive_factorial(nb));
	return(0);
}
