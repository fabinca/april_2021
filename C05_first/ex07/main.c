#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int nb = 9; 

	printf("Input: %d, result: %d \n", nb, ft_find_next_prime(nb));
	return(0);
}
