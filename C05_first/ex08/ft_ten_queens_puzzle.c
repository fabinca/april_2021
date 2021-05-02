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

void initialize(char *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		array[i] = '.';
		i++;
	}
	array[i] = 0;
}

void print_solution(char row[10])
{
	char print_it;
	int i;

	i = 0;
	while (i < 10)   //f.e. "abcdefghij"
	{
		print_it = row[i] - 17;
		write(1, &print_it, 1);
		i++;
	}
	write(1, "\n", 1);
}

void solve_recursive(int col, char row[10], char dia_left[19], char dia_right[19])
{
	char next_row;

	next_row = 'A';
	if (col < 10)
	{
		printf("col: %d\n", col);
		printf("dia_right: %s\n", dia_right);
		printf("dia_left: %s\n", dia_left);
		printf("row: %s\n", row);
		while (next_row <= 'J')
		{
			if (char_in_array(next_row, row))
				continue;
			else if (char_in_array(, dia_left))
				continue;
			else if (char_in_array(, dia_left))
				continue;
			else
			
		}
		
	}
	else
		print_solution(row);
}

int	ft_ten_queens_puzzle(void)
{
	char row[10];
	char dia_left[19];
	char dia_right[19];
	int col;

	col = 10;
	initialize(row, 10);
	initialize(dia_left, 19);
	initialize(dia_right, 19);
	print_solution(row);
	solve_recursive(col, row, dia_left, dia_right);
	return (0);
}
