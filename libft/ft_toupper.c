/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:21:12 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/13 20:27:50 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_toupper(unsigned char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	unsigned char c = 'C';
	printf("%c", ft_toupper(c));
}*/
