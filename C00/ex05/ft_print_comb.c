/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 07:46:07 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/15 15:48:24 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int a, int b, int c, int last)
{
	char print_this;

	print_this = a + '0';
	write(1, &print_this, 1);
	print_this = b + '0';
	write(1, &print_this, 1);
	print_this = c + '0';
	write(1, &print_this, 1);
	if (last == 0)
	{
		print_this = ',';
		write(1, &print_this, 1);
		print_this = ' ';
		write(1, &print_this, 1);
	}
	else
	{
		print_this = '\n';
		write(1, &print_this, 1);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 7)
	{
		ft_print_num(a, b, c, 0);
		c++;
		if (c > 9)
		{
			b++;
			if (b > 8)
			{
				a++;
				b = a + 1;
			}
			c = b + 1;
		}
	}
	ft_print_num(a, b, c, 1);
}
