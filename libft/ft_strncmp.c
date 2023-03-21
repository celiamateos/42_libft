/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:17:08 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/21 19:38:53 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0' && (i < n)))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int main(void)
{
	const char	s1 [] = "aauna vez tuve un sueño y se hizo realidad";
	const char	s2 [] = "aaKIEN DIJO SUERTE?";
//	size_t	n = 9;
	printf("%d", ft_strncmp(s1, s2, 2));
	return (0);
}
// algo no va bien porque no tiene en cuenta size_t n)
