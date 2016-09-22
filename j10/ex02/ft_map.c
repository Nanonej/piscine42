/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:25:10 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/12 17:37:45 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *copy;

	i = 0;
	if ((copy = (int*)malloc(sizeof(int) * length)) == NULL)
		return (0);
	while (i < length)
	{
		copy[i] = (*f)(tab[i]);
		i++;
	}
	return (copy);
}
