/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:22:33 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 17:32:28 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int fib_0;
	int fib_1;
	int result;

	fib_0 = 0;
	fib_1 = 1;
	result = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	while (index > 2)
	{
		fib_0 = fib_1;
		fib_1 = result;
		result = fib_0 + fib_1;
		index--;
	}
	return (result);
}
