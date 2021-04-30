/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:32:41 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 20:04:20 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int factor;

	factor = 1;
	while (1)
	{
		if (factor * factor == nb)
			return (factor);
		if (factor * factor > nb)
			break ;
		factor++;
	}
	return (0);
}
