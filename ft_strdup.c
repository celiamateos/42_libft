/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:32:35 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/06 19:11:53 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Asigna memoria suficiente para una copia de s1, realiza la copia y devuelve
 * un puntero a la misma.
 * Por ello primero creo ese puntero (p), hago un malloc del tamaño de s1 
 * un numero x de cajas y cada caja tendrá el tamaño de char, 1 byte.
 * Si p es nulo, es decir si el malloc ha fallado retornará nulo, este
 * control de errores es necesario siempre que haga malloc.
 * para copiar una cadena en otra utilizo strlcpy.*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	return (p);
}
/*
int	main(void)
{
	char	s1 [] = "Hola k pasa cara pasa!";
	char	*result;
	char	*result1;

	result = ft_strdup(s1);
	result1 = strdup(s1);

	printf("ft_strdup: %s\n", result);
	printf("strdup: %s", result1);
}*/
