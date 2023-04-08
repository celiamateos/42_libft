/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 13:05:15 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/07 17:03:41 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Esta función corta la parte de s1 que no coincide con la informacion de set
 * primer while = mientras la posicion de i sea distinto a nulo, recorre la
 * string. Porque strchr busca si la posicion de i se incluye en set y si 
 * no encuentra ese caracter devuelve nulo. Ahora tenemos la posicion en la
 * que queremos empezar a copiar.
 * segund while = recorre s1 desde el final de s1  mientras es distinta 
 * a lo que encuentra en set y mientras end sea mayor que i(ya que si no tb
 * buscaría en el set que hay antes de lo que quiero copiar.
 * El len de result es igal a la diferencia entre end e i + 1 porque end se
 * quedó en la ultima posición de lo que quiero copiar.
 * */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	end;
	size_t	lenresult;

	i = 0;
	result = 0;
	end = ft_strlen(s1);
	if (s1 != NULL && set != NULL)
	{
		while (s1[i] != '\0' && ft_strchr(set, s1[i]))
			i++;
		while (end > i && ft_strchr(set, s1[end]))
			end--;
		lenresult = (end - i + 1);
		result = ft_substr(s1, i, lenresult);
	}
	return (result);
}
/*
int	main(void)
{
	char	s1 [] = "abc42abc";
	char	set [] = "abc";
	char	*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
	return(0);
}*/
