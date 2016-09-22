/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 02:03:31 by agrau             #+#    #+#             */
/*   Updated: 2016/09/18 18:56:29 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	ft_def_char_by_pos0(int x, int y, int column, int line)
{
	if (column == 1 && line == 1)
		return ('o');
	else if (column == x && line == 1 && x != 1)
		return ('o');
	else if (column == x && line == y && x != 1 && y != 1)
		return ('o');
	else if (column == 1 && line == y && y != 1)
		return ('o');
	else if (column == 1 || column == x)
		return ('|');
	else if (line == 1 || line == y)
		return ('-');
	else
		return (' ');
}

char	*colle00(int y, int x)
{
	int		column;
	int		line;
	char	*tab;
	int		pos;

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
				tab[pos++] = ft_def_char_by_pos0(x, y, column, line);
				column++;
			}
			tab[pos++] = '\n';
			line++;
		}
		tab[pos] = '\0';
	}
	return (tab);
}
