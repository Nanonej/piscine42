/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:55:47 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/09 12:52:44 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour);

int		main(void)
{
	int		n;

	n = -1;
	while (n++ < 24)
	{
		printf("Hour = %d ", n);
		ft_takes_place(n);
	}
	return (0);
}
