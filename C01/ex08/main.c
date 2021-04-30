#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int *tab;
	int size;
	int arr[4];

	size = 4;
	arr[0] = 4;
	arr[1] = 8;
	arr[2] = 1;
	arr[3] = 2;
	tab = arr;
	printf("Before: %d,", tab[0]);
	printf("%d,", tab[1]);
	printf("%d,", tab[2]);
	printf("%d,", tab[3]);
	ft_sort_int_tab(tab, size);
	printf("After: %d,", tab[0]);
	printf("%d,", tab[1]);
	printf("%d,", tab[2]);
	printf("%d,", tab[3]);

	
}