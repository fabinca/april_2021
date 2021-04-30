/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabah <asabah@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:37:04 by asabah            #+#    #+#             */
/*   Updated: 2021/04/18 10:01:18 by asabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_findcharacter(int x, int y, int i)
{
	int c;

	c = 0;
	while (c < y)
	{
		if (i == 0 && c == 0)
		{
			ft_putchar('A');
		}
		else if ((i == 0 && c == y - 1) || (i == x - 1 && c == 0))
		{
			ft_putchar('C');
		}
		else if (i == x - 1 && c == y - 1)
		{
			ft_putchar('A');
		}
		else if (i == 0 || i == x - 1 || c == y - 1 || c == 0)
		{
			ft_putchar('B');
		}
		else
			ft_putchar(' ');
		c++;
	}
}

void	rush04(int x, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		ft_findcharacter(y, x, i);
		ft_putchar('\n');
		i++;
	}
}
