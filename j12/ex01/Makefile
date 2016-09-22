# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 12:00:32 by aridolfi          #+#    #+#              #
#    Updated: 2016/09/14 20:06:52 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

FILES = ./main.c

OBJT = ./main.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FILES)
	gcc $(FLAGS) $(OBJT) -o $(NAME)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all
