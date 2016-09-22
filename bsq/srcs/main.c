/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchim <lchim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:22:08 by lchim             #+#    #+#             */
/*   Updated: 2016/09/21 22:23:44 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_manager.h"
#include "bsq.h"
#include "init_map.h"
#include <unistd.h>

void	start_bsq(char *argv)
{
	t_core		core;
	t_biggest	pos;
	int			*this_map;

	ft_readmap(argv, &this_map, &core);
	set_col(&core, this_map);
	this_map = check_map(this_map, &core, &pos);
	display_map(this_map, &core, &pos);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			start_bsq(argv[i++]);
			write(1, "\n\n", 2);
		}
	}
	else
		write(1, "map error\n", 10);
	return (0);
}
