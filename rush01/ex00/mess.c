/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boudel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 10:40:39 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/11 17:31:12 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int		check_lines(int argc)
{
	if (argc != 10)
		return (1);
	return (0);
}

int		check_col(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (argv[i][j])
			j++;
		if (j != 9)
			return (1);
		i++;
	}
	return (0);
}

int		check_char(int **grid)
{
	int	i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] > 9)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		**ft_free_sdk(int **grid)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	return (grid);
}

int		**ft_atoi_sdk(char **argv, int **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				grid[i][j] = 0;
			else
				grid[i][j] = (argv[i + 1][j] - 48);
			j++;
		}
		i++;
	}
	return (grid);
}
