/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 16:26:03 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/04 16:49:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_c(char a, char b, char c, int x)
{
	int		u;

	u = 1;
	while (u <= x)
	{
		if (u == 1)
			ft_putchar(a);
		else if (u == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		u++;
	}
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	int		i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_c('A', 'B', 'C', x);
		else if (i == y)
			print_c('A', 'B', 'C', x);
		else
			print_c('B', ' ', 'B', x);
		i++;
	}
}
