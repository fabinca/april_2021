/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:52:50 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/23 00:06:07 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int swap;
	int save_a;

	index = 0;
	while (index < size)
	{
		swap = size - 1;
		while (swap > index)
		{
			if (*(tab + index) > *(tab + swap))
			{
				save_a = *(tab + index);
				*(tab + index) = *(tab + swap);
				*(tab + swap) = save_a;
			}
			swap--;
		}
		index++;
	}
}
