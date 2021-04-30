/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabah <asabah@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 08:02:25 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/18 10:00:31 by asabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_find_chararacter(int ct_x, int ct_y, int x, int y)
{
	if ((ct_y == 1 || ct_y == y) && (ct_x == 1))
	{
		ft_putchar('A');
	}
	else if ((ct_y == 1 || ct_y == y) && ct_x == x)
	{
		ft_putchar('C');
	}
	else if (ct_y == y || ct_y == 1 || ct_x == 1 || ct_x == x)
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush03(int x, int y)
{
	int	ct_x;
	int	ct_y;

	ct_y = 1;
	while (ct_y <= y)
	{
		ct_x = 1;
		while (ct_x <= x)
		{
			ft_find_chararacter(ct_x, ct_y, x, y);
			ct_x++;
		}
		ft_putchar('\n');
		ct_y++;
	}
}
