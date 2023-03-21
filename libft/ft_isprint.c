/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:09:23 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/21 18:42:44 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
/*
int main(void)
{
    int c = 188;
	int c1 = 'a';

    printf("%d\n", ft_isprint(c));
    printf("%d", ft_isprint(c1));
}*/
