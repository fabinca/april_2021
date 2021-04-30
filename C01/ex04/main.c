#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int *pdiv;
	int	*pmod;
	int a;
	int b;
	char print_this;

	a = 9;
	b = 2;
	pdiv = &a;
	pmod = &b;
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	ft_ultimate_div_mod(pdiv, pmod);
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	return (0);
}