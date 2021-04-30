/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:56:26 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 09:00:54 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int strl_dest;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	strl_dest = i;
	i++;
	while ((src[j] != 0) && (j < (size - strl_dest - 1)))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	while (src[j] != 0)
		j++;
		i++;
	return (i);
}
