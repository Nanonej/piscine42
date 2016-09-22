/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 00:56:20 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/11 20:47:25 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_lines(int argc);
int		check_col(char **argv);
void	ft_putstr(char *str);
int		**ft_atoi_sdk(char **argv, int **grid);
int		check_char(int **grid);
int		is_ok(int **grid, int position);
void	print_sdk(int **grid);
int		**ft_free_sdk(int **grid);

int		main(int argc, char **argv)
{
	int	**grid;
	int i;

	i = -1;
	if (check_lines(argc) || check_col(argv))
	{
		ft_putstr("Erreur\n");
		return (1);
	}
	grid = (int**)malloc(sizeof(int*) * 9);
	while (i++ < 9)
		grid[i] = (int*)malloc(sizeof(int) * 9);
	ft_atoi_sdk(argv, grid);
	if (check_char(grid))
	{
		ft_putstr("Erreur\n");
		ft_free_sdk(grid);
		return (1);
	}
	is_ok(grid, 0);
	print_sdk(grid);
	ft_free_sdk(grid);
	return (0);
}
