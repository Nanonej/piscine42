/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 13:28:53 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/19 18:35:04 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE 4096
#include "ft.h"

#include <stdio.h>

char	*ft_readpipe(int ret, int i, int n)
{
	char	buf[BUF_SIZE + 1];
	char	*memo;
	char	*tmp;

	memo = 0;
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		i = -1;
		tmp = memo;
		memo = (char*)malloc(sizeof(char) * (n + ret) + 1);
		if (memo == 0)
			return (0);
		while (++i < n)
			memo[i] = tmp[i];
		while (i < n + ret)
		{
			memo[i] = buf[i - n];
			i++;
		}
		memo[i] = '\0';
		n = n + ret;
	}
	return (memo);
}

int		main(void)
{
	char	*to_cmp;
	int		x;
	int		y;
	int		first;

	if ((to_cmp = ft_readpipe(0, 0, 0)) == 0)
		return (0);
	x = count_lin(to_cmp);
	y = count_col(to_cmp);
	if (to_cmp == 0)
		write(1, "aucune\n", 7);
	if (*to_cmp == '\n' || *to_cmp == '\0')
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	first = 0;
	first = ft_putcolle00(to_cmp, x, y, first);
	first = ft_putcolle01(to_cmp, x, y, first);
	first = ft_putcolle02(to_cmp, x, y, first);
	first = ft_putcolle03(to_cmp, x, y, first);
	first = ft_putcolle04(to_cmp, x, y, first);
	(first != 0 ? write(1, "\n", 1) : write(1, "aucune\n", 7));
	return (0);
}
