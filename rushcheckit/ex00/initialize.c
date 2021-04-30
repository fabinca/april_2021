/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 09:19:45 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:25:48 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_clues_cols(char array[6][6], char *clues)
{
	int row;
	int col;
	int i;

	row = 0;
	col = 1;
	i = 0;
	while (i < 15)
	{
		array[row][col] = clues[i];
		i = i + 2;
		col++;
		if (col == 5)
		{
			col = 1;
			row = 5;
		}
	}
}

void	add_clues_rows(char array[6][6], char *clues)
{
	int row;
	int col;
	int i;

	row = 1;
	col = 0;
	i = 16;
	while (i < 31)
	{
		array[row][col] = clues[i];
		i = i + 2;
		row++;
		if (row == 5)
		{
			col = 5;
			row = 1;
		}
	}
}

void	initialize(char array[6][6], char *clues)
{
	int row;
	int col;

	row = 0;
	while (row <= 5)
	{
		col = 0;
		while (col <= 5)
		{
			array[row][col] = '0';
			col++;
		}
		row++;
	}
	add_clues_rows(array, clues);
	add_clues_cols(array, clues);
}
