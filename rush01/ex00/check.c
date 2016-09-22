/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 21:00:32 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/11 20:11:48 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	print_sdk(int **grid)
{
	int	i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putnbr(grid[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		miss_on_lin(int k, int **grid, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		miss_on_col(int k, int **grid, int j)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		miss_on_sec(int k, int **grid, int i, int j)
{
	int	si;
	int sj;

	si = 3 * (i / 3);
	sj = 3 * (j / 3);
	i = si;
	while (i < (si + 3))
	{
		j = sj;
		while (j < (sj + 3))
		{
			if (grid[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_ok(int **grid, int position)
{
	int i;
	int j;
	int k;

	i = position / 9;
	j = position % 9;
	k = 1;
	if (position == 9 * 9)
		return (1);
	if (grid[i][j] != 0)
		return (is_ok(grid, (position + 1)));
	while (k <= 9)
	{
		if (miss_on_lin(k, grid, i) && miss_on_col(k, grid, j) &&
			miss_on_sec(k, grid, i, j))
		{
			grid[i][j] = k;
			if (is_ok(grid, position + 1))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
