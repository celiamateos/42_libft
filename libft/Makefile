# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 13:03:04 by cmateos-          #+#    #+#              #
#    Updated: 2023/03/12 18:37:25 by cmateos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "Enjoy what you are doing"
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
LIB = ar -rcs (esto es importante pero aún no se pa que sirve jeje)
SRC = main.c ft_isalpha.c ft_isdigit ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

all = $(NAME):
	gcc -o $(NAME) $(SRC)
regle_a:
	echo $(TEXT) 

clean:
	/bin/rm -f *.o

fclean: clean
	/bim/rm -f $(NAME)

re: fclean all

