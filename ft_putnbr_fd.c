/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:35:01 by cmateos-          #+#    #+#             */
/*   Updated: 2023/04/10 21:48:13 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*static void	ft_putchar(char n, int fd)
{
	write (fd, &n, 1);
}*/

static void	recursi(int	n)
{
	size_t	digits;
	digits = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		digits++;
	}
	if (n < 10)
	{
		n = n + '0';
		ft_putchar(n, i1);
	}
	else
	{
		recursi(n / 10);
		ft_putchar(n % 10 + '0);
	}
}
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = n * (-1);
		recursi(n);
	}
	else
		recursi(n);
}

int	main(void)
{
	ft_putnbr_fd(1234, 1);
	return (0);
}
