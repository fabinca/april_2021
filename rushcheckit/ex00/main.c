/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:12:54 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/25 21:31:52 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(char array[6][6], char *clues);
void	initialize(char array[6][6], char *clues);
void	print_array(char array[6][6]);
int		check_input(char *clues);

int		main(int argc, char **argv)
{
	char	grid[6][6];
	int		solvable;
	char	*error;

	error = "Error\n";
	if (check_input(argv[1]) == 0)
	{
		write(1, error, 6);
		return (0);
	}
	initialize(grid, argv[1]);
	solvable = solve(grid, argv[1]);
	if (solvable)
		print_array(grid);
	else
		write(1, error, 6);
	return (0);
}
