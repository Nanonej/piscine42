/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 15:05:21 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/08 15:39:07 by aridolfi         ###   ########.fr       */
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
