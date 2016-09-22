/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 11:24:00 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/21 18:55:06 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_MAP_H
# define INIT_MAP_H

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "struct_manager.h"
# include "my_math.h"

void	ft_error(int error, int type_error);
int		ft_corelen(char *argv);
void	ft_read_core(int fd, char *argv, t_core *core);
int		ft_maplen(char *argv);
void	ft_readmap(char *argv, int **this_map, t_core *core);

#endif
