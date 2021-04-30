/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:21:23 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/15 20:52:15 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print_this;
	int		divide;

	if (nb < 0)
	{
		print_this = '-';
		write(1, &print_this, 1);
		nb *= -1;
	}
	divide = 1000000000;
	while (divide > nb)
	{
		divide = divide / 10;
	}
	while (divide >= 1)
	{
		print_this = nb / divide + '0';
		write(1, &print_this, 1);
		nb = nb % divide;
		divide = divide / 10;
	}
}
