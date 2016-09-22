/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:55:47 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/09 16:47:55 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_collatz_conjecture(unsigned int base);

int		main(void)
{
	printf("%d\n", ft_collatz_conjecture(25));
	return (0);
}
