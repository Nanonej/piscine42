/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 16:27:36 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/09 16:58:43 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a_copy;
	int b_copy;
	int c_copy;
	int d_copy;

	a_copy = ***a;
	b_copy = *b;
	c_copy = *******c;
	d_copy = ****d;
	*******c = a_copy;
	****d = c_copy;
	*b = d_copy;
	***a = b_copy;
}
