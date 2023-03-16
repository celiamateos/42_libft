/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:33:44 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/13 20:31:00 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_tolower(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	unsigned char c = 'A';
	printf("%c", ft_tolower(c));
}*/
