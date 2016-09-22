/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 11:47:58 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/09 12:52:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h;
	char	*j;

	h = hour;
	j = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;
	if (hour < 11)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", j, h, (h + 1) % 12);
	else if (hour == 11)
		printf("%s 11.00 A.M. AND 12.00 P.M.\n", j);
	else if (hour == 23)
		printf("%s 11.00 P.M. AND 12.00 A.M.\n", j);
	else if (hour == 24)
		printf("%s 12.00 A.M. AND 1.00 A.M.\n", j);
	else
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", j, h, (h + 1) % 12);
}
