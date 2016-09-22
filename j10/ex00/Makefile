# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 14:21:40 by aridolfi          #+#    #+#              #
#    Updated: 2016/09/13 15:46:05 by aridolfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I includes
	ar rc libft.a $(OBJT)
	ranlib libft.a

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f libft.a

re: fclean all
