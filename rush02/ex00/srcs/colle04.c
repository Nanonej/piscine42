/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 02:03:31 by agrau             #+#    #+#             */
/*   Updated: 2016/09/18 18:55:27 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	ft_def_char_by_pos4(int x, int y, int column, int line)
{
	if (column == 1 && line == 1)
		return ('A');
	else if (column == x && line == 1 && x != 1)
		return ('C');
	else if (column == x && line == y && x != 1 && y != 1)
		return ('A');
	else if (column == 1 && line == y && y != 1)
		return ('C');
	else if (column == 1 || column == x)
		return ('B');
	else if (line == 1 || line == y)
		return ('B');
	else
		return (' ');
}

char	*colle04(int y, int x)
{
	int		column;
	int		line;
	int		pos;
	char	*tab;

	if (!((tab = (char *)malloc(sizeof(char) * (x * (y + 1)) + 1))))
		return (NULL);
	pos = 0;
	if (x > 0 && y > 0)
	{
		line = 1;
		while (line <= y)
		{
			column = 1;
			while (column <= x)
			{
				tab[pos++] = ft_def_char_by_pos4(x, y, column, line);
				column++;
			}
			tab[pos++] = '\n';
			line++;
		}
		tab[pos] = '\0';
	}
	return (tab);
}
