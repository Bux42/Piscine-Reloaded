# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: videsvau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:21:12 by videsvau          #+#    #+#              #
#    Updated: 2016/11/04 18:58:56 by videsvau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/ft_sto.c

MAIN = main.c

OBJ = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
		gcc -o $(NAME) -I srcs/ $(OBJ) $(SRC) $(MAIN)

clean:
		rm -f srcs/libft.gch

fclean: clean
		rm -f $(NAME)

re: fclean all
