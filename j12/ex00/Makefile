# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/14 12:00:32 by aridolfi          #+#    #+#              #
#    Updated: 2016/09/14 20:36:40 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FILES = ./main.c

OBJT = ./main.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILES)
	gcc $(OBJT) -o $(NAME)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all
