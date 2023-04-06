/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:22:47 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/03 23:50:18 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (n != 0))
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	unsigned char	s [] = "No quiero vivir";
	size_t	n = 2;
	ft_bzero(s, n);
	printf("%c", s[0]);
	return (0);
//bzero pone a 0 o a NULL n número de caracter 
de por ejemplo una string. 
//Por lo que en esta prueba, printería nada. 
//Si printeo el carácter número 3, 
//printearía una q)
}*/
