/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 18:05:47 by rmonnier          #+#    #+#             */
/*   Updated: 2016/09/18 23:23:10 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_putcolle00(char *to_cmp, int x, int y, int first)
{
	char *tabcolle00;

	tabcolle00 = colle00(x, y);
	if (ft_tab_cmp(to_cmp, tabcolle00))
	{
		if (first != 0)
			write(1, " || ", 4);
		write(1, "[colle-00] [", 12);
		ft_putnbr(y);
		write(1, "] [", 3);
		ft_putnbr(x);
		write(1, "]", 1);
		first++;
	}
	free(tabcolle00);
	return (first);
}

int		ft_putcolle01(char *to_cmp, int x, int y, int first)
{
	char *tabcolle01;

	tabcolle01 = colle01(x, y);
	if (ft_tab_cmp(to_cmp, tabcolle01))
	{
		if (first != 0)
			write(1, " || ", 4);
		write(1, "[colle-01] [", 12);
		ft_putnbr(y);
		write(1, "] [", 3);
		ft_putnbr(x);
		write(1, "]", 1);
		first++;
	}
	free(tabcolle01);
	return (first);
}

int		ft_putcolle02(char *to_cmp, int x, int y, int first)
{
	char *tabcolle02;

	tabcolle02 = colle02(x, y);
	if (ft_tab_cmp(to_cmp, tabcolle02))
	{
		if (first != 0)
			write(1, " || ", 4);
		write(1, "[colle-02] [", 12);
		ft_putnbr(y);
		write(1, "] [", 3);
		ft_putnbr(x);
		write(1, "]", 1);
		first++;
	}
	free(tabcolle02);
	return (first);
}

int		ft_putcolle03(char *to_cmp, int x, int y, int first)
{
	char *tabcolle03;

	tabcolle03 = colle03(x, y);
	if (ft_tab_cmp(to_cmp, tabcolle03))
	{
		if (first != 0)
			write(1, " || ", 4);
		write(1, "[colle-03] [", 12);
		ft_putnbr(y);
		write(1, "] [", 3);
		ft_putnbr(x);
		write(1, "]", 1);
		first++;
	}
	free(tabcolle03);
	return (first);
}

int		ft_putcolle04(char *to_cmp, int x, int y, int first)
{
	char *tabcolle04;

	tabcolle04 = colle04(x, y);
	if (ft_tab_cmp(to_cmp, tabcolle04))
	{
		if (first != 0)
			write(1, " || ", 4);
		write(1, "[colle-04] [", 12);
		ft_putnbr(y);
		write(1, "] [", 3);
		ft_putnbr(x);
		write(1, "]", 1);
		first++;
	}
	free(tabcolle04);
	return (first);
}
