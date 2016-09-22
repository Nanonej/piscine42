/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_manager.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 09:40:40 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 19:38:00 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_MANAGER_H
# define STRUCT_MANAGER_H

typedef struct	s_core
{
	int		bsq_row;
	int		bsq_col;
	char	bsq_empty;
	char	bsq_block;
	char	bsq_square;
}				t_core;

typedef	struct	s_biggest
{
	int		this_row;
	int		this_col;
	int		this_size;
}				t_biggest;

void			init_pos(t_biggest *pos);
void			set_core(t_core *core, char *base);
void			set_col(t_core *core, int *my_map);
void			set_pos(t_biggest *pos, int my_row, int my_col, int my_size);

#endif
