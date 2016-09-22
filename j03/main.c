/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 09:34:16 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/02 23:41:52 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	int i;

	i = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	while ((nb / i) != 0)
	{
		i = i * 10;
	}
	i = i / 10;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (i > 0)
	{
		ft_putchar(nb / i % 10 + 48);
		i = i / 10;
	}
}

void	ft_ft(int *ptr)
{
	*ptr = 42;
}

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

char *ft_strrev(char *str)
{
	int i;
	int swap;
	int d;

	i = ft_strlen(str) - 1;
	d = 0;
	while (i > d)
	{
		swap = str[i];
		str[i] = str[d];
		str[d] = swap;
		i--;
		d++;
	}
	return str;
}

int		main(void)
{
  char string[]="pouet ds les cjaps"; 
	ft_putstr(ft_strrev(string));
	return (0);
}
