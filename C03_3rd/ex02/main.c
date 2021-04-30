/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:39:08 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 08:18:18 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcat() function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end
of dest, and then adds a terminating null byte.  The strings may not overlap, and the dest string must have enough space
for  the  result.  If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue
for attacking secure programs.*/ 

#include <stdio.h>   
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char a[] = "blabla";
	char ac[] = "blabla";
	char b[] =  "12";
	
	printf("MYfunc: %s \n", ft_strcat(ac, b));
	printf("Their func: %s \n ", strcat(a, b));

	return (0);
}