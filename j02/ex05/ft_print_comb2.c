/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 22:34:28 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/01 12:42:59 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int comb[2];

	comb[0] = 0;
	while (comb[0] <= 98)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 99)
		{
			ft_putchar(comb[0] / 10 + 48);
			ft_putchar(comb[0] % 10 + 48);
			ft_putchar(' ');
			ft_putchar(comb[1] / 10 + 48);
			ft_putchar(comb[1] % 10 + 48);
			if (comb[0] < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
