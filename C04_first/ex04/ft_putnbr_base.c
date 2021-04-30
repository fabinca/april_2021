/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:31:39 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 15:33:30 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

void	put_char(char a)
{
	write(1, &a, 1);
}

int		unvalid_input(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (j < i)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	int base_nb;

	base_nb = ft_strlen(base);
	if (unvalid_input(base) || base_nb < 2)
		return ;
	if (nb < 0)
	{
		put_char('-');
		nb = nb * -1;
	}
	if (nb >= base_nb)
	{
		ft_putnbr_base(nb / base_nb, base);
		ft_putnbr_base(nb % base_nb, base);
	}
	else
		put_char(base[nb]);
}
