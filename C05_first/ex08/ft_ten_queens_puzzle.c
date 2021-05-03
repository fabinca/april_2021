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
#include <stdio.h>

void initialize(char array[11])
{
	int i;

	i = 0;
	while (i < 10)
	{
		array[i] = '0';
		i++;
	}
	array[i] = 0;
}

void print_solution(char row[11])
{
	char print_it;
	int i;

	i = 0;
	while (i < 5)   //f.e. "abcdefghij"
	{
		print_it = row[i] - 17;
		write(1, &print_it, 1);
		i++;
	}
	write(1, "\n", 1);
}

int char_not_in_array(char letter, char array[11], int col)
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

void solve_recursive(int col, char row[11], char dia_left[11], char dia_right[11])
{
	char next_row;

	next_row = 'A';
	if (col < 10)
	{
		while (next_row <= 'J')
		{
			if (char_not_in_array(next_row, row, col) && char_not_in_array(next_row + col, dia_left, col) &&
			 char_not_in_array(next_row + 9 - col, dia_right, col))
			{
				row[col] = next_row;
				dia_left[col] = next_row + col;
				dia_right[col] = next_row + 9 - col;
				solve_recursive(col + 1, row, dia_left, dia_right);
			}
			next_row++;
		}
	}
	else
		print_solution(row);
}

int	ft_ten_queens_puzzle(void)
{
	char row[11];
	char dia_left[11];
	char dia_right[11];
	int col;

	col = 0;
	initialize(row);
	initialize(dia_left);
	initialize(dia_right);
	solve_recursive(col, row, dia_left, dia_right);
	return (0);
}
