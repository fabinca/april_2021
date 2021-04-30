#include <stdio.h>

//void	ft_putstr_non_printable(char *str);
void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char string[] = "ä t ö b ü g Ä t Ö t Ü";
	char test[] = "Coucou\ntu vas bien ?";
	//char a = 77;
	//printf("input: %c outputshould: %x, ", a , a);
	//ft_put_char_as_hex(a);
	printf(" \n Before:\n %s \n %s\n ", string, test);
	ft_putstr_non_printable(string);
	ft_putstr_non_printable(test);
}