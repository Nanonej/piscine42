/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 09:40:33 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 22:26:01 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_manager.h"
#include "init_map.h"

void	init_pos(t_biggest *pos)
{
	pos->this_row = 0;
	pos->this_col = 0;
	pos->this_size = 0;
}

void	set_core(t_core *core, char *base)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (base[i + 3] != '\0')
	{
		count += base[i] - 48;
		count *= 10;
		i++;
	}
	core->bsq_row = count / 10;
	core->bsq_empty = base[i++];
	core->bsq_block = base[i++];
	core->bsq_square = base[i];
}

void	set_col(t_core *core, int *my_map)
{
	int		i;

	i = 0;
	while (my_map[i] != -1)
		i++;
	core->bsq_col = i + 1;
}

void	set_pos(t_biggest *pos, int my_row, int my_col, int my_size)
{
	pos->this_row = my_row;
	pos->this_col = my_col;
	pos->this_size = my_size;
}
