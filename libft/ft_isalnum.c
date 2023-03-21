/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:00:00 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/21 18:33:53 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"
#include<unistd.h>

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) && ft_isalpha(c));
}

int main(void)
{
    int c = '4';
    int c2 = 'a';
    int c3 = '_';
    int c4 = '{';
    int c5 = 'P';

    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(c2));
    printf("%d\n", ft_isalnum(c3));
    printf("%d\n", ft_isalnum(c4));
    printf("%d", ft_isalnum(c5));
    return (0);
}
