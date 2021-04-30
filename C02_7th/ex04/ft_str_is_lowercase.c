/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:16:49 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 15:58:47 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int is_lower;

	i = 0;
	is_lower = 1;
	while (is_lower == 1 & str[i] != '\0')
	{
		if (str[i] < 'a' | str[i] > 'z')
			is_lower = 0;
		i++;
	}
	return (is_lower);
}
