/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 14:26:02 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/08 15:16:57 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int *i;
	int t;

	i = ft_range(5, 8);
	t = 0;
	while (t < 3)
	{
		printf("%d\n", t[i]);
		t++;
	}
	return (0);
}
