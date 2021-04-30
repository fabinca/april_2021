/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 17:42:32 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int		main(void)
{
	char a = 0;
	char *str = &a;
	while (a <= 127)
	{
		printf("%d : %s : %d \n" , a, str, ft_str_is_alpha(str));
		a++;
		if (a < 0)
			break;
	}
	char noalpha[6] = "yes_a";
	char alpha[6] = "Hello";
	printf("%s : %d", noalpha, ft_str_is_alpha(noalpha));
	printf("%s : %d", alpha, ft_str_is_alpha(alpha));
}