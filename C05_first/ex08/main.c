#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int solutions;

	solutions = ft_ten_queens_puzzle();
	printf("%d", solutions);

	return(0);
}
