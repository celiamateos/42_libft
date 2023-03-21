/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:18:13 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/21 18:37:09 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_isalpha(argv[1][0]));
	
	return (0);
}

int main(void)
{
	int	c = 'a';
	int	c2 = '2';

	printf("%d\n", ft_isalpha(c));
	printf("%d", ft_isalpha(c2));
//el return (0) lo sobre entiende, no hace falta ponerlo jeje
}*/
