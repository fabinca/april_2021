/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:39:36 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 08:14:09 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* s1 > s2 (first unmatching ASCI value) -> return difference  
The  strcmp()  function  compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than
       zero if s1 is found, respectively, to be less than, to match, or be greater than s2.*/

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char*	s1 = "00 0";
	char*	s2 = "00 1";
	int a;
	int b;

	a = ft_strcmp(s1, s2);
	b = strcmp(s1, s2);
	printf("MYfunc: %d \nTheir func: %d \n%s - %s \n", a, b, s1, s2);
	a = ft_strcmp(s2, s1);
	b = strcmp(s2, s1);	
	printf("MYfunc: %d \nTheir func: %d \n%s - %s \n", a, b, s2, s1);
	return (0);
}