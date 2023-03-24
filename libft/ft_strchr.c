/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:47:22 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/24 19:36:26 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;

	while (s[i] != '\0')
	{	
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	int c = 'Q';
	const char s [] = "Hola CELIQA";
	char	*result;
	result = ft_strchr(s, c);
	printf("%s", result);
	return (0);
}*/
