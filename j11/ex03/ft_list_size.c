/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:16:13 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/13 17:29:29 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	tmp = begin_list;
	count = 0;
	if (tmp)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}
