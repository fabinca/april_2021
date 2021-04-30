/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:05:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/23 00:05:57 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int save_a;

	counter = 0;
	while (counter < (size / 2))
	{
		save_a = tab[counter];
		tab[counter] = tab[size - 1 - counter];
		tab[size - 1 - counter] = save_a;
		counter++;
	}
}
