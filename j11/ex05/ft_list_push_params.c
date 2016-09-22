/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:57:02 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/13 18:57:35 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	t_list	*tmp;
	int		i;

	if (ac < 2)
		return (elem = NULL);
	elem = ft_create_elem(av[1]);
	tmp = elem;
	i = 2;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = tmp;
		tmp = elem;
		i++;
	}
	return (elem);
}
