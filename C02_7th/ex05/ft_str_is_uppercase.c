/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:21:12 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 15:59:01 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int is_upper;

	i = 0;
	is_upper = 1;
	while (is_upper == 1 & str[i] != '\0')
	{
		if (str[i] > 'Z' | str[i] < 'A')
			is_upper = 0;
		i++;
	}
	return (is_upper);
}
