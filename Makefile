# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmateos- <cmateos-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 13:03:04 by cmateos-          #+#    #+#              #
#    Updated: 2023/03/11 18:20:27 by cmateos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TEXT = "Enjoy what you are doing""

regle_a:
	echo $(TEXT)

regle_b: regle_a 
	echo "regle B"
