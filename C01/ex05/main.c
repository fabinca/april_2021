#include <unistd.h>

void	ft_putstr(char *str);

int		main(void)
{
	char *string;

	string = "Hello";
	ft_putstr(string);
}

/* string [H][e][l][l][o][\0] */