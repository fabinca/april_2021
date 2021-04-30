#include <unistd.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int *pa;
	int	*pb;
	int a;
	int b;
	char print_this;

	a = 1;
	b = 5;
	pa = &a;
	pb = &b;
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	ft_swap(pa, pb);
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	return (0);
}