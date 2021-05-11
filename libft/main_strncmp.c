/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:39:36 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 08:15:54 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s1 > s2 (first unmatching ASCI value) -> return difference but only first n bytes */ 
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char*	s1 = "\0app";
	char*	s2 = "\0apple";
	int a;
	int b;

	a = ft_strncmp(s1, s2, 0);
	b = strncmp(s1, s2, 0);
	printf("MYfunc: %d \nTheir func: %d \n%s - %s \n", a, b, s1, s2);
	a = ft_strncmp(s2, s1, 10);
	b = strncmp(s2, s1, 10);
	printf("MYfunc: %d \nTheir func: %d \n%s - %s \n", a, b, s1, s2);
	return (0);
}