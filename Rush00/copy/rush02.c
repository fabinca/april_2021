/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabah <asabah@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 10:42:44 by mjamali           #+#    #+#             */
/*   Updated: 2021/04/18 10:00:15 by asabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_findchar(int ct_x, int ct_y, int x, int y)
{
	if (ct_y == 1 && (ct_x == 1 || ct_x == x))
	{
		ft_putchar('A');
	}
	else if (ct_y == y && (ct_x == 1 || ct_x == x))
	{
		ft_putchar('C');
	}
	else if (ct_x == 1 || ct_x == x || ct_y == 1 || ct_y == y)
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush02(int x, int y)
{
	int	ct_x;
	int	ct_y;

	ct_y = 1;
	while (ct_y <= y)
	{
		ct_x = 1;
		while (ct_x <= x)
		{
			ft_findchar(ct_x, ct_y, x, y);
			ct_x++;
		}
		ft_putchar('\n');
		ct_y++;
	}
}
