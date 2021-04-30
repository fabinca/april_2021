/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/27 20:32:28 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char test[6] = "aBcdz";
	char mixed[6] = "Abcd\n";


	printf("Before: %s - %s - %s \n", empty, test, mixed);
	printf("After: %s - %s - %s \n", ft_strupcase(empty), ft_strupcase(test), ft_strupcase(mixed));
	printf("After: %s - %s - %s \n", empty, test, mixed);
	
}