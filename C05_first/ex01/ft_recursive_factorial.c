/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:43:37 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 17:05:23 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	result = 1;
	if (nb > 0)
		result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}
