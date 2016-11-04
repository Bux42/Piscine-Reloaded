# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: videsvau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:12:34 by videsvau          #+#    #+#              #
#    Updated: 2016/11/04 16:14:24 by videsvau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c\
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c

OBJ = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	gcc -c $(OBJ) $(SRC)
	ar rc $(NAME) ft_putchar.o\
		ft_putstr.o\
		ft_strcmp.o\
		ft_strlen.o\
		ft_swap.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o\
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

fclean:
	rm -f $(NAME)

re: fclean all


