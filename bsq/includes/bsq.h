/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 15:42:04 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 22:26:15 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "my_math.h"
# include "struct_manager.h"

void	new_biggest(t_biggest *pos, t_core *core, int i, int my_pos);
int		*check_map(int *this_map, t_core *core, t_biggest *pos);
int		*ft_markbsq(t_biggest *pos, t_core *core, int *this_map);
void	display_map(int *this_map, t_core *core, t_biggest *pos);

#endif
