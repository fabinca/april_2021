/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:11:18 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 23:44:06 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int capitalize;

	capitalize = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (capitalize == 1 & str[i] >= 'a' & str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (capitalize == 0 & str[i] >= 'A' & str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'A' & str[i] <= 'Z') | (str[i] >= 'a' & str[i] <= 'z'))
			capitalize = 0;
		else if (str[i] >= '0' & str[i] <= '9')
			capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
