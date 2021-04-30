/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:45:32 by asabah            #+#    #+#             */
/*   Updated: 2021/04/18 08:22:32 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_find_char(int x, int y, int i)
{
	int ct;

	ct = 0;
	while (ct < y)
	{
		if ((i == 0 || i == x - 1) && (ct == 0 || ct == y - 1))
		{
			ft_putchar('o');
		}
		else if ((i == 0 || i == x - 1) && (ct != 0 || ct != y - 1))
		{
			ft_putchar('-');
		}
		else if (ct == 0 || ct == y - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		ct++;
	}
}

void	rush00(int x, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		ft_find_char(y, x, i);
		ft_putchar('\n');
		i++;
	}
}
