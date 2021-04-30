/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:37:14 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 18:42:37 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb < 2)
		return (0);
	divisor = 2;
	while (divisor <= nb / 2)
	{
		if (nb / divisor != 1 && nb % divisor == 0)
			return (0);
		divisor++;
	}
	return (1);
}
