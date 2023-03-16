# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 13:03:04 by cmateos-          #+#    #+#              #
#    Updated: 2023/03/16 19:44:06 by cmateos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "It 's up to you to figure it out for yourselves!"
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar -rcs 
SRC = main.c ft_isalpha.c ft_isdigit ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c

all = $(NAME):
	gcc -o $(NAME) $(CC) $(FLAGS) $(SRC) 
regle_a:
	echo $(TEXT) 

clean:
	/bin/rm -f *.o

fclean: clean
	/bim/rm -f $(NAME)

re: fclean all
