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

void	initialize(char array[10][10])
{
	int row;
	int col;

	row = 0;
	while (row <= 10)
	{
		col = 0;
		while (col <= 10)
		{
			array[row][col] = '0';
			col++;
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char 	grid[10][10];
	char 	queens[10];
	int		row;
	int		col;

	initialize(grid);
	row = 0;
	while (row <= 10)
	{
		col = 0;
		while (col <= 10)
		{
			
			array[row][col] = '0';
			col++;
		}
		row++;
	}
	
}