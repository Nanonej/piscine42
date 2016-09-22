/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 17:04:44 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/12 17:49:13 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_test(int n)
{
	return (n);
}

int		main(void)
{
	int tab[5] = {3, 2, 3, 8, 3};
	int *tab_test = tab;
	int *i;
	int	t;

	i = ft_map(tab_test, 5, &ft_test);
	t = 0;
	while (t < 5)
	{
		printf("%d\n", t[i]);
		t++;
	}
	return (0);
}
