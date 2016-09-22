/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:27:28 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/08 23:26:21 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int *i;
	int n;

	ft_ultimate_range(&i, 4, 10);
	n = 4;
	while (n++ < 10)
	{
		printf("|%d", *i);
		i++;
	}
	return (0);
}
