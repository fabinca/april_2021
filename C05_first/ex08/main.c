#include <stdio.h>

int	n_queens(int n);

int	main(void)
{
	int solutions;

	solutions = n_queens(15);
	printf("%d", solutions);

	return(0);
}
