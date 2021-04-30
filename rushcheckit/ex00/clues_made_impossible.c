/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues_made_impossible.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:33:32 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:22:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up_clues_impossible(char array[6][6], int col, char num)
{
	int		row;
	char	can_see_up;
	char	highest_up;

	row = 1;
	can_see_up = '0';
	highest_up = '0';
	while (row <= 3)
	{
		if (array[row][col] > highest_up)
		{
			can_see_up++;
			highest_up = array[row][col];
		}
		row++;
	}
	if (num > highest_up)
		can_see_up++;
	if (can_see_up != array[0][col])
		return (1);
	return (0);
}

int	col_down_clues_impossible(char array[6][6], int col, char num)
{
	int		row;
	char	can_see_down;
	char	highest_down;

	row = 1;
	can_see_down = '1';
	highest_down = num;
	while (row <= 3)
	{
		if (array[4 - row][col] > highest_down)
		{
			can_see_down++;
			highest_down = array[4 - row][col];
		}
		row++;
	}
	if (can_see_down != array[5][col])
		return (1);
	return (0);
}

int	row_left_clues_impossible(char array[6][6], int row, char num)
{
	int		col;
	char	can_see_left;
	char	highest_left;

	col = 1;
	can_see_left = '0';
	highest_left = '0';
	while (col <= 3)
	{
		if (array[row][col] > highest_left)
		{
			can_see_left++;
			highest_left = array[row][col];
		}
		col++;
	}
	if (num > highest_left)
		can_see_left++;
	if (can_see_left != array[row][0])
		return (1);
	return (0);
}

int	row_right_clues_impossible(char array[6][6], int row, char num)
{
	int		col;
	char	can_see_right;
	char	highest_right;

	col = 1;
	can_see_right = '1';
	highest_right = num;
	while (col <= 3)
	{
		if (array[row][4 - col] > highest_right)
		{
			can_see_right++;
			highest_right = array[row][4 - col];
		}
		col++;
	}
	if (can_see_right != array[row][5])
		return (1);
	return (0);
}

int	clues_made_impossible(char array[6][6], int row, int col, char num)
{
	if (col == 4)
	{
		if (row_left_clues_impossible(array, row, num) == 1)
			return (1);
		if (row_right_clues_impossible(array, row, num) == 1)
			return (1);
	}
	if (row == 4)
	{
		if (col_up_clues_impossible(array, col, num) == 1)
			return (1);
		if (col_down_clues_impossible(array, col, num) == 1)
			return (1);
	}
	return (0);
}
