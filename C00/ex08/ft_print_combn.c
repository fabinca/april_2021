/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:45:57 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/15 15:43:12 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int numbers[], int n, int sep)
{
	int		i;
	char	print_this;

	i = 0;
	while (i < n)
	{
		print_this = numbers[i] + '0';
		write(1, &print_this, 1);
		i++;
	}
	if (sep == 0)
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

void	ft_change(int numbers[], int n)
{
	int i;
	int j;

	i = n - 1;
	j = 9;
	while (i >= 0)
	{
		if (numbers[i] > j)
		{
			numbers[i - 1]++;
		}
		else
		{
			while (i < n - 1)
			{
				numbers[i + 1] = numbers[i] + 1;
				i++;
			}
			i = 0;
		}
		j--;
		i--;
	}
}

void	ft_print_combn(int n)
{
	int numbers[n];
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		numbers[i] = i;
		i++;
	}
	while (numbers[0] < 10 - n)
	{
		ft_print(numbers, n, 0);
		numbers[n - 1]++;
		if (numbers[n - 1] > 9)
		{
			ft_change(&numbers, n);
		}
	}
	ft_print(numbers, n, 1);
}
