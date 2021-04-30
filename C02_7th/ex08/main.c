/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 12:06:35 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char test[6] = "ABcdZ";
	char mixed[6] = "Abcd\n";


	printf("Before: %s - %s - %s \n", empty, test, mixed);
	printf("After: %s - %s - %s \n", ft_strlowcase(empty), ft_strlowcase(test), ft_strlowcase(mixed));
	printf("Before: %s - %s - %s \n", empty, test, mixed);
	
}