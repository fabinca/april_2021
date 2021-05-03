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

void initialize(char *array, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		array[i] = '0';
		i++;
	}
	array[i] = 0;
}

int char_not_in_array(char letter, char *array, int col)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (array[i] == letter)
			return (0);
		i++;
	}
	return (1);
}

void solve_recursive(int col, char *lines[3], int *count, int n)
{
	char next_row;

	next_row = 'A';
	if (col < n)
	{
		while (next_row <= 'A' + n - 1)
		{
			if (char_not_in_array(next_row, lines[0], col) && char_not_in_array(next_row + col, lines[1], col) &&
			 char_not_in_array(next_row + n - 1 - col, lines[2], col))
			{
				lines[0][col] = next_row;
				lines[1][col] = next_row + col;
				lines[2][col] = next_row + n - 1 - col;
				solve_recursive(col + 1, lines, count, n);
			}
			next_row++;
		}
	}
	else
	{
		count[0]++;
	}
}

int	n_queens(int n)
{
	char row[n + 1];
	char dia_left[n + 1];
	char dia_right[n + 1];
	char *lines[3];
	int col;
	int count;

	col = 0;
	count = 0;
	lines[0] = row;
	lines[1] = dia_left;
	lines[2] = dia_right;
	initialize(row, n);
	initialize(dia_left, n);
	initialize(dia_right, n);
	solve_recursive(col, lines, &count, n);
	return (count);
}
