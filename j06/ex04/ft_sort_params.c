/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 06:39:24 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/07 16:54:30 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_params_cmp(char *arg1, char *arg2)
{
	int i;

	i = 0;
	while (arg1[i] != '\0' || arg2[i] != '\0')
	{
		if (arg1[i] != arg2[i])
			return (arg1[i] - arg2[i]);
		i++;
	}
	return (0);
}

void	ft_params_swap(char *ar1, char *ar2)
{
	char *swap;

	swap = ar1;
	ar1 = ar2;
	ar2 = swap;
}

void	ft_print_params(char *ar)
{
	int i;

	i = 0;
	while (ar[i] != '\0')
	{
		ft_putchar(ar[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j < argc)
	{
		while (ft_params_cmp(argv[i], argv[i + 1]) < 0)
		{
			ft_params_swap(argv[i], argv[i + 1]);
			i++;
		}
		j++;
	}
	i = 0;
	while (argv[i] != '\0')
	{
		i++;
		ft_print_params(argv[i]);
	}
	return (0);
}
