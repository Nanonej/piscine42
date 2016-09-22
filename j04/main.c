/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 09:34:16 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/05 10:37:50 by aridolfi         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		i;
	char	swap;
	int		d;

	d = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > d)
	{
		swap = str[i];
		str[i] = str[d];
		str[d] = swap;
		i--;
		d++;
	}
	return (str);
}

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else
	{
		while (nb != 1)
		{
			nb--;
			fact = fact * nb;
		}
	}
	return (fact);
}

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	else
		nb = 1;
	return (nb);
}

int		ft_iterative_power(int nb, int power)
{
	int pwr;

	pwr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		pwr = pwr * nb;
		power--;
	}
	return (pwr);
}

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, (power - 1));
	}
	else
		return (nb);
	return (nb);
}

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}

int		main(void)
{
	ft_putnbr(ft_fibonacci(4));
	ft_putchar('\n');
	return (0);
}
