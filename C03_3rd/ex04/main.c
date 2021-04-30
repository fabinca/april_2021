/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:56:48 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/29 08:42:13 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strstr()  function finds the first occurrence of the substring needle in the string haystack.  The terminating null
       bytes ('\0') are not compared. These functions return a pointer to the beginning of the located substring, or NULL if the substring is not found.*/
#include <stdio.h>  
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *str = "Never ever stop learning :)";
	char *to_find = "blubb";
	char *to_find2 = "st";

	printf("string: %s, to find: %s \n", str, to_find);
	printf("they: place: %s \n",  strstr(str, to_find));
	printf("me  : place: %s \n \n", ft_strstr(str, to_find));
	printf("string: %s, to find: %s\n", str, to_find2);
	printf("they: place: %s\n",  strstr(str, to_find2));
	printf("me  : place: %s\n", ft_strstr(str, to_find2));
	return (0);

	
}