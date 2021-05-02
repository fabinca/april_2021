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
		array[i] = 'b';
		i++;
	}
	array[i] = 0;
}

void print_solution(char row[10])
{
	char print_it;
	int i;

	i = 0;
	while (row[i])   //f.e. "abcdefghij"
	{
		//print_it = row[i] - 49;
		write(1, &row[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void solve_recursive(int col, char row[10], char dia_left[19], char dia_right[19])
{
	if (col < 10)
	{
		//put_next_queen(col + 1, lines_cp);
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
	printf("row: %s\n", row);
	initialize(dia_left, 19);
	printf("dia_left: %s\n", dia_left);
	initialize(dia_right, 19);
	printf("dia_right: %s\n", dia_right);
	print_solution(row);
	//solve_recursive(col, row, dia_left, dia_right);
	return (0);
}
