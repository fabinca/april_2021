/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:12:18 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:23:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	clues_made_impossible(char array[6][6], int row, int col, char num);

int	num_in_row(char array[6][6], int row, int col, char num)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (array[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	num_in_col(char array[6][6], int row, int col, char num)
{
	int i;

	i = 1;
	while (i < 5)
	{
		if (array[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}

int	num_is_valid(char array[6][6], int row, int col, char num)
{
	if (num < '1' || num > '4')
		return (0);
	if (num_in_row(array, row, col, num) == 1)
		return (0);
	if (num_in_col(array, row, col, num) == 1)
		return (0);
	if (clues_made_impossible(array, row, col, num) == 1)
		return (0);
	return (1);
}
