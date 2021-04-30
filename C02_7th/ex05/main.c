/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 11:52:31 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char upper[6] = "ABCDE";
	char mixed[6] = "Abcde";


	printf("%s : %d \n", empty, ft_str_is_uppercase(empty));
	printf("%s : %d \n", upper, ft_str_is_uppercase(upper));
	printf("%s : %d \n", mixed, ft_str_is_uppercase(mixed));
}