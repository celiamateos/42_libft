/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:51:47 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/06 18:31:37 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Primero hago un malloc, reservar un espacio de memoria.
 * Count es el numero de elementos qe se deben asignar
 * Size es el tamaño de cada elemento en bytes
 * Lo primero creo un puntero(p) donde haré el malloc para reservar memoria.
 * El total de memoria será el numero de elementos por el tamaño de cada uno.
 * Si p está vacío retornará nulo (control de errores)
 * Hago un memset, el cual rellena cajas y le digo que lo rellene de 0 
 * y que necesito tantos ceros como bytes totales tiene ese puntero(p)
 * */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, (count * size));
	return (p);
}
