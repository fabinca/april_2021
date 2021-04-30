#include <unistd.h>

void	main(void)
{
	int neg;
	int pos;
	int zero;

	neg = -2000;
	pos = 129;
	zero = 0;
	ft_is_negative(neg);
	ft_is_negative(pos);
	ft_is_negative(zero);
}