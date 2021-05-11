#include <stdio.h>
//space, form-feed ('\f'), newline ('\n'),
// carriage return ('\r'), horizontal tab ('\t'), and vertical tab ('\v'). 

int	ft_atoi (char *str);

int main(void)
{
	char str[] = "\n  --+-+-a1230045";
	
	printf( "%s , %d ", str, ft_atoi(str));
	return (0);
}