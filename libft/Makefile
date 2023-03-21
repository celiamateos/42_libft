# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 13:03:04 by cmateos-          #+#    #+#              #
#    Updated: 2023/03/21 19:43:56 by cmateos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "It 's up to you to figure it out for yourselves!"
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rcs 
SRC = main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c strncmp.c

all: $(NAME):
	ar rcs $(NAME) $(CC) $(FLAGS) $(LIB) $(SRC)

regle_a:
	echo $(TEXT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f *.o

fclean: clean
	/bim/rm -f $(NAME)

re: fclean all
