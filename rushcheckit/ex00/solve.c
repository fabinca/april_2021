/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:45:18 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:02:50 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		num_is_valid(char array[6][6], int row, int col, char num);

void	print_array(char array[6][6]);

void	go_back_fields(char array[6][6], int *row, int *col)
{
	array[*row][*col] = '0';
	if (*col == 1)
	{
		*row = *row - 1;
		*col = 3;
	}
	else
		*col = *col - 2;
}

int		fill_field(char array[6][6], int row, int col)
{
	char num;

	num = array[row][col];
	while (num < '4')
	{
		num++;
		if (num_is_valid(array, row, col, num))
		{
			array[row][col] = num;
			return (1);
		}
	}
	return (0);
}

int		solve(char array[6][6])
{
	int		row;
	int		col;
	int		ok;

	row = 1;
	while (row <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			ok = fill_field(array, row, col);
			if (ok == 0 && col == 1 && row == 1)
				return (0);
			if (ok == 0)
				go_back_fields(array, &row, &col);
			col++;
		}
		row++;
	}
	return (1);
}
