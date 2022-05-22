# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 23:13:07 by oqatim            #+#    #+#              #
#    Updated: 2022/05/22 03:12:09 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c \
		ft_memset.c ft_strlcat.c ft_isalnum.c ft_isascii.c \
		ft_bzero.c ft_memcpy.c ft_strlen.c ft_memchr.c \
		ft_calloc.c ft_isdigit.c ft_strlcpy.c ft_strchr.c \
		ft_strrchr.c ft_isprint.c ft_strnstr.c  \
		ft_strdup.c ft_isalpha.c ft_substr.c ft_strjoin.c \
		ft_itoa.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_memcmp.c ft_memmove.c \
		ft_split.c ft_putnbr_fd.c ft_putendl_fd.c\

LIB = libft.h
		
OBJ = $(FILES:.c=.o)


all : $(NAME)

FLAGS = -Wall -Wextra -Werror
	
$(NAME): $(OBJ) $(LIB)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $<

clean :  
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
