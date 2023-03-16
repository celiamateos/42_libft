/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:08:24 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/16 18:16:00 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char *ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] + 1 != c) //asi entiende que no hay más c?
				return (s + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	int c = '2'
	const char s [] = "2eselúltimonumerode42jeje"
	char *result;

	result = ft_strrchr(s, c);
	printf("%s", result);
	return (0);
}
