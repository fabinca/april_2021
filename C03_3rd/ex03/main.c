/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:39:08 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/28 08:24:32 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strncat() function is similar, except that

       *  it will use at most n bytes from src; and

       *  src does not need to be null-terminated if it contains n or more bytes.

       As with strcat(), the resulting string in dest is always null-terminated.

       If src contains n or more bytes, strncat() writes n+1 bytes to dest (n from src plus the terminating null byte).  There‐
       fore, the size of dest must be at least strlen(dest)+n+1. */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[] = "Blablablablabla";
	char src[] = "Source";
	char dest1[] = "Blablablablabla";
	char src1[] = "Source";
	int n = 4;
	char *a;
	char *b;

	a = ft_strncat(dest, src, n);
	b = strncat(dest1, src1, n);
	printf("MYfunc: %s \nTheir func: %s \n n = %u", a, b, n);
	return (0);
}