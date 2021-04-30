/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 08:32:11 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/18 08:42:04 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter);

void	ft_find_letter(int ct_x, int ct_y, int x, int y)
{
	if (ct_y == 1 && ct_x == 1)
	{
		ft_putchar('/');
	}
	else if ((ct_y == 1 && ct_x == x) || (ct_y == y && ct_x == 1))
	{
		ft_putchar('\\');
	}
	else if (ct_y == y && ct_x == x)
	{
		ft_putchar('/');
	}
	else if (ct_y == y || ct_y == 1 || ct_x == 1 || ct_x == x)
	{
		ft_putchar('*');
	}
	else
		ft_putchar(' ');
}

void	rush01(int x, int y)
{
	int	ct_x;
	int	ct_y;

	ct_y = 1;
	while (ct_y <= y)
	{
		ct_x = 1;
		while (ct_x <= x)
		{
			ft_find_letter(ct_x, ct_y, x, y);
			ct_x++;
		}
		ft_putchar('\n');
		ct_y++;
	}
}
