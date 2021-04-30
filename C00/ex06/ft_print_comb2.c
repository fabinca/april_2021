/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:12:51 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/15 12:15:19 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int num, int sep)
{
	char print_this;

	print_this = num / 10 + '0';
	write(1, &print_this, 1);
	print_this = (num % 10) + '0';
	write(1, &print_this, 1);
	if (sep < 2)
	{
		if (sep == 1)
		{
			print_this = ',';
			write(1, &print_this, 1);
		}
		print_this = ' ';
		write(1, &print_this, 1);
	}
	else
	{
		print_this = '\n';
		write(1, &print_this, 1);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b < 100)
		{
			ft_print_num(a, 0);
			ft_print_num(b, 1);
			b++;
		}
		a++;
		b = a + 1;
	}
	ft_print_num(a, 0);
	ft_print_num(b, 2);
}
