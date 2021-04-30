/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 09:14:30 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* gcc -lbsd */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int    main(void)
{
	char b[6] = "12345";
    char a[10] = "123456789";
	char d[6] = "12345";
    char c[10] = "123456789";

    printf("\nMy func: returned String=%u, a=%s\n\n", ft_strlcpy(a, b, 30), a);

    printf("Their func: returned String=%zu, a=%s\n\n", strlcpy(c, d, 30), c);
    return (0);
}
/*
int		main(void)
{
	char dest[] = "Hello there";
	char str[] = "Learn as if you were to live forever";
	unsigned int size = 6;

	printf("Before dest: %s str: %s, size: %o \n", dest, str, size);
	
	printf("size of src string: %o After dest: %s str: %s", ft_strlcpy(dest, str, size), dest, str);
}
*/