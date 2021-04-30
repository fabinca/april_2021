/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 09:12:49 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[] = "1234556";
	char str[] = "Habcde";
	char dest1[] = "";
	char str1[] = "Habcde";

	printf("Before dest: %s str: %s  ", dest, str);	
	printf("strncpy: %s  \n", strncpy(dest, str, 10));
	printf("Before dest: %s str: %s  ", dest1, str1);
	printf("ft_strncpy: %s  \n", ft_strncpy(dest1, str1, 10));
}
