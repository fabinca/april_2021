#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int *pdiv;
	int	*pmod;
	int a;
	int b;
	char print_this;

	a = 0;
	b = 0;
	pdiv = &a;
	pmod = &b;
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	ft_div_mod(10, 3, pdiv, pmod);
	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	return (0);
}