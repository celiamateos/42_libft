/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:48:56 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/24 19:07:18 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	 strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;
	
	i = 0;
		while (src[i] != '\0' && i < (char *)dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		while (i < dstsize)
		{
			dst[i] = '\0';
			i++;
		}
		return (dst);
}

int	main(void)
{
	const char	dst [] = "La culpa nuncaaaaa nos ayuda a ser mejores personas";
	const char	src [] = "La responsabilidad nos ayuda a ser mejores personas";
	size_t	dstsize = 18;
	int	i = 0;

	ft_strlcpy(dst, src, dstsize);
	while (dst[i] != '\0')
	{
		write(1, &dst[i], 1);
		i++;
	}
	return (0);
}
