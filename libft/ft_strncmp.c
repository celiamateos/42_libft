/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:17:08 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/16 19:43:55 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

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
	const char	s1 [] = "Alea iacta est";
	const char	s2 [] = "I am grateful";
	size_t	n = 9;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
// algo no va bien porque solamente compara el primer carácter :'( xd
