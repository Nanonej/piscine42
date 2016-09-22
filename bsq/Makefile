# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmonnier <rmonnier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 12:13:13 by rmonnier          #+#    #+#              #
#    Updated: 2016/09/21 18:43:28 by lchim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ./srcs/main.c ./srcs/init_map.c ./srcs/struct_manager.c \
./srcs/bsq.c ./srcs/my_math.c

OFILES = main.o init_map.o struct_manager.o bsq.o my_math.o

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) :
	gcc -c $(FLAG) -I./includes $(SRC)
	gcc $(FLAG) -o $(NAME) $(OFILES)
	chmod 755 $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
