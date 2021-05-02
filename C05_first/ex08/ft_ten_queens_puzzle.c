/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 20:05:11 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 20:14:55 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <malloc.h>

void initialize(char *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		array[i] = '0';
		i++;
	}
}

int	ft_ten_queens_puzzle(int n)
{
	char *row;
	char *dia_left;
	char *dia_right;
	int col;

	col = 0;
	row = (char*)malloc(n + 1);
	dia_right = (char*)malloc(2 * n);
	dia_left = (char*)malloc(2 * n);
	initialize(row, n);
	initialize(dia_left, 2 * n - 1);
	initialize(dia_right, 2 * n - 1);
	while (col < n)
	{
		//put_next_queen(row);
		col++;
	}
	return (0);
}
