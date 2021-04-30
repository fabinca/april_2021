/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:04:25 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:03:27 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	print_array(char array[6][6])
{
	int col;
	int row;

	row = 1;
	while (row <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			put_char(array[row][col]);
			if (col != 4)
				put_char(' ');
			col++;
		}
		put_char('\n');
		row++;
	}
}
