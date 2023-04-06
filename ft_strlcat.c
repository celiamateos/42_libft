/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:52:20 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/06 13:04:48 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Strlcat concatena (añade la cadena src al final de dst y añade \0 al final, 
 * por ello el primer paso es recorrer dst hasta el nulo para comenzar a 
 * "copiar" src a partir de ahíí)
 * Garantiza que en el búfer de destino (dstsize) no se produzca 
 * desbordamiento. Es decir, si el búfer(dstsize) es mayor o igual que dst
 * return 1) no hay desbordamiento del bufer y por ello concatena y retorna 
 * la longitud de la cadena concatenada.
 * Si el bufer es menor que dst, return 2) no concatena nada y rretorna 
 * la suma del tamaño de la cadena de origen y el tamaño
 * del bufer de destino.*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	id;
	size_t	is;
	size_t	len;

	len = ft_strlen(dst);
	id = 0;
	is = 0;
	while (dst[id] != '\0')
			id++;
	if (dstsize != 0 && dstsize >= len)
	{
		while (src[is] && is + 1 < dstsize - len)
		{
			dst[id] = src[is];
			id++;
			is++;
		}
		dst[id] = '\0';
		return (len + ft_strlen(src));
	}	
	else
		return (dstsize + ft_strlen(src));
}
/*
int	main(void)
{
	char	src [] = "Paco";
	char	dst [8] = "hola";
	size_t	dstsize = 7;

	char	src1 [] = "Paco";
	char	dst1 [8] = "hola";
	size_t	dstsize1 = 7;

	printf("%zu || %s\n", ft_strlcat(dst, src, dstsize), dst);
	printf("%lu || %s", strlcat(dst1, src1, dstsize1), dst1);
	return(0);
}**/
