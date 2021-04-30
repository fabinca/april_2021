#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char *string;
	int str_length;

	string = "Hello";
	str_length = ft_strlen(string);
	printf("String is %d letters long", str_length);
}