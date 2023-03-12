/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:18:13 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/12 14:49:39 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_isalpha(char c)
{
// OTRA MANERA DE HACERLO. Por definicion, true 1, false 0. 
	return ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_isalpha(argv[1][0]));
	
	return (0);
}
*/

int main(void)
{
	char c = 'a';
	char c2 = '2';

	printf("%d\n", ft_isalpha(c));
	printf("%d", ft_isalpha(c2));
//el return (0) lo sobre entiende, no hace falta ponerlo jeje
}
