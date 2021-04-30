#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int number;
	int ***p3;
	int **p2;
	int *p1;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;
	char print_this;

	number = 13;
	p1 = &number;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	print_this = number / 10 + '0';
	write(1, &print_this, 1);
	print_this = number % 10 + '0';
	write(1, &print_this, 1);
	return 0;
}