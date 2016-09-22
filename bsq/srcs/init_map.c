/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:17:52 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/21 22:27:36 by lchim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_map.h"
#include <stdio.h>

void	ft_error(int error, int type_error)
{
	if (error == -1 && type_error == 1)
	{
		write(2, "open() error\n", 13);
		exit(1);
	}
	if (error == -1 && type_error == 2)
	{
		write(2, "read() error\n", 13);
		exit(1);
	}
	if (error == -1 && type_error == 3)
	{
		write(2, "close() error\n", 14);
		exit(1);
	}
}

int		ft_corelen(char *argv)
{
	char	buf[1];
	int		nbchar;
	int		fd;
	int		i;

	i = 0;
	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_error(fd, 1);
	while ((nbchar = read(fd, buf, 1)) && buf[0] != '\n')
	{
		ft_error(nbchar, 2);
		i++;
	}
	if (close(fd) == -1)
		ft_error(fd, 3);
	return (i);
}

void	ft_read_core(int fd, char *argv, t_core *core)
{
	char	buf[1];
	char	*first_row;
	int		nbchar;
	int		i;

	i = 0;
	first_row = malloc(sizeof(char) * (ft_corelen(argv) + 1));
	if (first_row == NULL)
		exit(1);
	while ((nbchar = read(fd, buf, 1)) && buf[0] != '\n')
	{
		ft_error(nbchar, 2);
		first_row[i] = buf[0];
		i++;
	}
	first_row[i] = '\0';
	set_core(core, first_row);
	free(first_row);
}

int		ft_maplen(char *argv)
{
	char	buf[1];
	int		nbchar;
	int		fd;
	int		i;

	i = 0;
	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_error(fd, 1);
	while ((nbchar = read(fd, buf, 1)))
	{
		ft_error(nbchar, 2);
		i++;
	}
	if (close(fd) == -1)
		ft_error(fd, 3);
	return (i);
}

void	ft_readmap(char *argv, int **this_map, t_core *core)
{
	char	buf[1];
	int		nbchar;
	int		fd;
	int		i;

	i = 0;
	*this_map = malloc(sizeof(int) * \
	((ft_maplen(argv) - ft_corelen(argv)) + 1));
	if (*this_map == NULL)
		exit(1);
	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_error(fd, 1);
	ft_read_core(fd, argv, core);
	while ((nbchar = read(fd, buf, 1)))
	{
		ft_error(nbchar, 2);
		this_map[0][i] = my_transf_char(buf[0], core);
		i++;
	}
	if (close(fd) == -1)
		ft_error(fd, 3);
}
