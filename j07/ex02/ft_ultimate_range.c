/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 15:57:48 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/08 19:43:37 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *frch;

	i = 0;
	if (min >= max)
		return (0);
	frch = (int*)malloc(sizeof(int) * ((max - min)));
	while (min < max)
	{
		frch[i] = min;
		i++;
		min++;
	}
	return (frch);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	else
		return (max - min);
}
