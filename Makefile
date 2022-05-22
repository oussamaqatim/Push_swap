# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 10:32:10 by oqatim            #+#    #+#              #
#    Updated: 2022/05/20 01:08:18 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 

CFLAGS = -Wall -Wextra -Werror

SRC = mandatory/parsing.c mandatory/push_swap_utils.c mandatory/ft_instructions_1.c mandatory/ft_instructions_2.c mandatory/ft_sort_3.c

OBJ = $(SRC:.c=.o)

HDR = mandatory/push_swap.h

all : $(NAME)

$(NAME) : $(OBJ) $(HDR)
	make -C ./libft_1337
	gcc $(CFLAGS) $(SRC) ./libft_1337/libft.a  -o $(NAME)

clean : 
	make clean -C ./libft_1337
	rm -rf $(OBJ) 

fclean : 
	make fclean -C ./libft_1337
	rm -rf $(OBJ) $(NAME)
 
re : fclean all
	