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
#include <malloc.h>
#include <stdio.h>

void initialize(char *array, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		array[i] = '0';
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


void solve(int col, char **lines, int n)
{
	char *row_cp;
	char *dia_left_cp;
	char *dia_right_cp;
	char **lines_cp;

	row_cp = (char*)malloc(n + 1);
	dia_right_cp = (char*)malloc(2 * n);
	dia_left_cp = (char*)malloc(2 * n);
	lines_cp = (char**)malloc(3 + 1);
	*row_cp = *lines[0];
	lines_cp[0] = row_cp;
	lines_cp[1] = dia_left_cp;
	lines_cp[2] = dia_right_cp;
	printf("%s\n%s", lines[0], row_cp);
	free(row_cp);
	free(dia_right_cp);
	free(dia_left_cp);
	free(lines_cp);
}

int	ft_ten_queens_puzzle(int n)
{
	char *row;
	char *dia_left;
	char *dia_right;
	char **lines;
	int col;

	col = 0;
	row = (char*)malloc(n + 1);
	dia_right = (char*)malloc(2 * n);
	dia_left = (char*)malloc(2 * n);
	lines = (char**)malloc(3 + 1);
	lines[0] = row;
	lines[1] = dia_left;
	lines[2] = dia_right;
	initialize(row, n);
	initialize(dia_left, 2 * n - 1);
	initialize(dia_right, 2 * n - 1);
	solve(col, lines, n);
	return (0);
}
