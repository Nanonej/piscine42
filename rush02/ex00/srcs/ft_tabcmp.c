/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:44:20 by rmonnier          #+#    #+#             */
/*   Updated: 2016/09/18 23:22:05 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		count_lin(char *memo)
{
	int		x;
	int		i;

	x = 0;
	i = 0;
	while (memo[i])
	{
		if (memo[i] == '\n')
			x++;
		i++;
	}
	return (x);
}

int		count_col(char *memo)
{
	int y;

	y = 0;
	while (memo[y] != '\n')
		y++;
	return (y);
}

int		ft_tab_cmp(char *tab1, char *tab2)
{
	int i;

	i = 0;
	while (tab1[i] == tab2[i] && tab2[i] != '\0')
		i++;
	if (tab2[i] == '\0' && tab2[i] == '\0')
		return (1);
	else
		return (0);
}
