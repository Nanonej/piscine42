/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:20:22 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 21:43:42 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_math.h"
#include "struct_manager.h"

int		my_transf_char(char c, t_core *core)
{
	if (c == core->bsq_empty)
		return (1);
	else if (c == core->bsq_block)
		return (0);
	else if (c == '\n')
		return (-1);
	else
	{
		write(2, "map error\n", 10);
		return (-100);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putin(int i, t_core *core)
{
	if (i == -1)
		ft_putchar('\n');
	else if (i == 0)
		ft_putchar(core->bsq_block);
	else if (i == -2)
		ft_putchar(core->bsq_square);
	else
		ft_putchar(core->bsq_empty);
}

int		ft_min3(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	else
		return (c);
}
