/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:11:54 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 15:58:30 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int is_numeric;

	is_numeric = 1;
	i = 0;
	while (is_numeric == 1 & str[i] != '\0')
	{
		if (str[i] < '0' | str[i] > '9')
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}
