#include <unistd.h>
void	ft_putnbr(int nb);

int main(void)
{
	int nbr = -2147483648;
	int nb = 1230123;
	ft_putnbr(nbr);
	write(1, "\n", 1);
	ft_putnbr(nb);	
	return (0);
}