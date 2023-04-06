/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:10:56 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/06 17:16:17 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Esta funcion busca un caracter(c) en un bloque de memoria(*s). 
 * n es el número de bytes que se van a buscar a partir de la ubicacion inicial.
 * Return un puntero a primer byte donde encuentra c o un puntero nulo si no
 * encuentra c.
 * Solamente busca en una direccion, de izquierda a derecha.*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		chr;
	size_t				i;

	str = s;
	chr = c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return ((void *)&str[i]);
		i++;
	}
	if (chr == '\0')
		return (NULL);
	return (NULL);
}
/*
int	main(void)
{
	int c = '4';
	const char s [] = "Con 42 cojones";
	char	*result;
	char	*result1;
	size_t	n = 5;
	result = ft_memchr(s, c, n);
	result1 = ft_memchr(s, c, n);
	printf("ft_memchr: %s\n", result);
	printf("memchr: %s", result1);
	return (0);
}*/
