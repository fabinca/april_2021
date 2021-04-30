/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:35:39 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 16:29:20 by cfabian          ###   ########.fr       */
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

void	translate(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (base[j] != 0)
		{
			if (str[i] == base[j])
			{
				str[i] = '0' + j;
				break ;
			}
			j++;
		}
		i++;
	}
}

int		is_white_space(char a)
{
	if (a == ' ' || a == '\f' || a == '\n' ||
		a == '\r' || a == '\t' || a == '\v')
		return (1);
	else
		return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int	num;
	int	negative_ct;
	int basenum;

	num = 0;
	negative_ct = 0;
	basenum = ft_strlen(base);
	while (is_white_space(str[0]))
		str++;
	while (*str == '+' | *str == '-')
	{
		if (*str == '-')
			negative_ct++;
		str++;
	}
	translate(str, base);
	while (*str >= '0' && *str <= '0' + basenum)
	{
		num = num * basenum + (*str - '0');
		str++;
	}
	if (negative_ct % 2 == 1)
		num = num * -1;
	return (num);
}
