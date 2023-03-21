/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:21:12 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/21 18:52:09 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	unsigned char c = 'a';
	printf("%c", ft_toupper(c));
}*/
