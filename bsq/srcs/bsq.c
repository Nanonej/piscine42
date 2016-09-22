/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:23:31 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 22:27:11 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	new_biggest(t_biggest *pos, t_core *core, int i, int my_pos)
{
	pos->this_size = i;
	pos->this_row = (my_pos / core->bsq_col);
	pos->this_col = (my_pos % core->bsq_col);
}

int		*check_map(int *this_map, t_core *core, t_biggest *pos)
{
	int		my_pos;

	my_pos = core->bsq_col;
	pos->this_size = 1;
	while (my_pos != ((core->bsq_col * core->bsq_row) + 1))
	{
		if (this_map[my_pos] == 0)
			my_pos++;
		else if (this_map[my_pos] == -1)
			my_pos += 2;
		else
		{
			this_map[my_pos] += ft_min3(this_map[my_pos - 1], \
			this_map[my_pos - core->bsq_col], \
			this_map[my_pos - core->bsq_col - 1]);
			if (this_map[my_pos] > pos->this_size)
				new_biggest(pos, core, this_map[my_pos], my_pos);
			my_pos++;
		}
	}
	return (this_map);
}

int		*ft_markbsq(t_biggest *pos, t_core *core, int *this_map)
{
	int i;
	int j;
	int	cursor;
	int tmp;

	i = 0;
	cursor = (pos->this_row * core->bsq_col) + (pos->this_col);
	tmp = cursor;
	while (i < pos->this_size)
	{
		j = 0;
		while (j <= (pos->this_size - 1))
		{
			this_map[cursor] = -2;
			j++;
			cursor--;
		}
		cursor = tmp - (core->bsq_col);
		tmp = cursor;
		i++;
	}
	return (this_map);
}

void	display_map(int *this_map, t_core *core, t_biggest *pos)
{
	int		my_pos;

	my_pos = 0;
	this_map = ft_markbsq(pos, core, this_map);
	while (my_pos != ((core->bsq_col * core->bsq_row) - 1))
	{
		my_putin(this_map[my_pos], core);
		my_pos++;
	}
}
