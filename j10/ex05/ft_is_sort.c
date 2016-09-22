/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 21:30:30 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/13 13:37:14 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_less(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < (length - 1))
	{
		if (((*f)(tab[i], tab[i + 1])) <= 0)
		{
			i++;
			if (i == (length - 1))
				return (1);
		}
		else
			return (0);
	}
}

int		ft_sort_more(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < (length - 1))
	{
		if (((*f)(tab[i], tab[i + 1])) >= 0)
		{
			i++;
			if (i == (length - 1))
				return (1);
		}
		else
			return (0);
	}
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length <= 2)
		return (1);
	if (((*f)(tab[i], tab[length])) <= 0)
		ft_sort_less(tab, length, (*f)(tab, tab));
	if (((*f)(tab[i], tab[length])) > 0)
		ft_sort_more(tab, length, (*f)(tab, tab));
	return (0);
}
