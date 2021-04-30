/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfabian <cfabian@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:17:31 by cfabian           #+#    #+#             */
/*   Updated: 2021/04/22 11:45:56 by cfabian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int		main(void)
{
	char nonum[6] = "12abc";
	char nonum2[6] = "12_+ ";
	char num[6] = "12345";


	printf("%s : %d", nonum, ft_str_is_numeric(nonum));
	printf("%s : %d", nonum2, ft_str_is_numeric(nonum2));
	printf("%s : %d", num, ft_str_is_numeric(num));
}