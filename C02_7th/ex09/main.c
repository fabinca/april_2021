/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 12:14:59 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char empty[1] = "\0";
	char test[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before: %s -%s  \n", empty, test);
	printf("After: %s - %s \n", ft_strcapitalize(empty), ft_strcapitalize(test));
	printf("After: %s - %s \n", empty, test);
	
}