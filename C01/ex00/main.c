#include <unistd.h>

void ft_ft(int *nbr);

int main(void)
{
	int number;
	int *pointer;
	char print_this;

	number = 13;
	pointer = &number;
	ft_ft(pointer);
	print_this = number / 10 + '0';
	write(1, &print_this, 1);
	print_this = number % 10 + '0';
	write(1, &print_this, 1);
	return 0;
}