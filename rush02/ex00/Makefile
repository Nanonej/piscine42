# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 12:13:13 by rmonnier          #+#    #+#              #
#    Updated: 2016/09/18 19:19:22 by rmonnier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = srcs/colle00.c srcs/colle01.c srcs/colle02.c srcs/colle03.c\
	  srcs/colle04.c srcs/ft_colle2.c srcs/ft_putchar.c srcs/ft_putcolle.c\
	  srcs/ft_putnbr.c srcs/ft_tabcmp.c

OFILES = colle00.o colle01.o colle02.o colle03.o colle04.o ft_colle2.o\
		ft_putchar.o ft_putcolle.o ft_putnbr.o ft_tabcmp.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	gcc -c $(FLAG) -I./includes $(SRC)
	gcc $(FLAG) -o $(NAME) $(OFILES)
	chmod 755 colle-2

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
