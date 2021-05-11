/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:40:56 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 08:49:03 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find[0] == 0)
		return (str);
	while (str[0] != 0)
	{
		if (ft_cmp(to_find, str) == 0)
			return (str);
		str++;
	}
	return (0);
}
