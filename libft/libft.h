/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:12:44 by cmateos-          #+#    #+#             */
/*   Updated: 2023/03/12 18:37:30 by cmateos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H // verme unos videos de la intra jejejeje
# define LIBFT_H // esto que es?
# include <stdio.h> // esto es para size_t y malloc segun Baguilar


// aqui va el prototipo de todas las funciones que quiero incluir en mi libft
int	ft_isalpha(char c);
int ft_isdigit (unsigned char c);
int ft_isalnum (unsigned char c);
int ft_isascii (char c);
int ft_isprint (unsigned char c);
int	ft_strlen(char *str);

#endif //siempre se termina así pero aún no se por qué
