/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:06:21 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 23:25:45 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char_as_hex(char c)
{
	int		hex[2];
	char	print_this[2];

	if (c < 0)
	{
		hex[0] = (c + 256) / 16;
		hex[1] = (c + 256) % 16;
	}
	else
	{
		hex[0] = c / 16;
		hex[1] = c % 16;
	}
	if (hex[0] >= 0 & hex[0] <= 9)
		print_this[0] = hex[0] + '0';
	else
		print_this[0] = hex[0] + 'a' - 10;
	if (hex[1] >= 0 & hex[1] <= 9)
		print_this[1] = hex[1] + '0';
	else
		print_this[1] = hex[1] + 'a' - 10;
	write(1, &print_this, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= ' ' & str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			ft_put_char_as_hex(str[i]);
		}
		i++;
	}
}
