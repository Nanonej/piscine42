/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:24:07 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/08 07:00:45 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	j = 0;
	len = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			j++;
		len += j;
		j = 0;
		i++;
	}
	return (len + (argc - 2));
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*one;

	i = 1;
	j = 0;
	k = 0;
	one = (char*)malloc(sizeof(*one) * (ft_length_params(argc, argv) + 1));
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			one[k] = argv[i][j];
			j++;
			k++;
		}
		one[k] = '\n';
		k++;
		j = 0;
		i++;
	}
	one[k - 1] = '\0';
	return (one);
}
