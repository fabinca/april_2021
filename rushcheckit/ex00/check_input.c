/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:04:45 by mwen              #+#    #+#             */
/*   Updated: 2021/04/25 14:36:34 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_input(char *input)
{
	int i;

	i = 0;
	while (input[i] != '\0')
	{
		if (i % 2 == 1 && input[i] != ' ')
			return (0);
		else if (i % 2 == 0)
		{
			if ('1' > input[i] | input[i] > '4')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
