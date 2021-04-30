/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 11:50:35 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char lower[6] = "abcde";
	char mixed[6] = "abc d";


	printf("%s : %d \n", empty, ft_str_is_lowercase(empty));
	printf("%s : %d \n", lower, ft_str_is_lowercase(lower));
	printf("%s : %d \n", mixed, ft_str_is_lowercase(mixed));
}