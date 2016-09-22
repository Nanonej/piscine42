/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 22:17:43 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/11 23:49:52 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);
int		nmatch(char *s1, char *s2);

int		main(void)
{
	printf("%d", nmatch("abcbd", "*b*"));
	return (0);
}
