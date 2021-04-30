/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 11:54:45 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char printable[6] = "ABCDE";
	char mixed[6] = "Abcd\n";


	printf("%s : %d \n", empty, ft_str_is_printable(empty));
	printf("%s : %d \n", printable, ft_str_is_printable(printable));
	printf("%s : %d \n", mixed, ft_str_is_printable(mixed));
}