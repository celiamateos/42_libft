# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 13:03:04 by cmateos-          #+#    #+#              #
#    Updated: 2023/03/22 21:34:13 by cmateos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "It 's up to you to figure it out for yourselves!"
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB = ar rc
SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
# Crea los archivos .o
OBJ = $(SRC:.c=.o)
# Toma el mismo nombre del programa al que se dirige
all: $(NAME)
# Crea el programa a partir de los archivos .o (OBJ y ranlib es para que compile junto con la libreria)
$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)
	@ranlib $(NAME)
# Mi comentario guachi
regle_a:
	echo $(TEXT)
# Transforma los archivos .c en .o (comprimidos)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
