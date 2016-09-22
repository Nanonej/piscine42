/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 07:30:57 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/09 11:46:18 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strwc(char *str)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	if (i == 0)
	{
		while ((str[i] == 9 || str[i] == 10 || str[i] == 32) && str[i])
			i++;
	}
	while (str[i])
	{
		while (((str[i] < 9 && str[i] > 10) || str[i] != 32) && str[i])
			i++;
		while (((str[i] >= 9 && str[i] <= 10) || str[i] == 32) && str[i])
			i++;
		wc++;
	}
	return (wc);
}

int		ft_strlc(char *str)
{
	int	i;
	int	lc;

	i = 0;
	lc = 0;
	while (str[i])
	{
		while (((str[i] < 9 && str[i] > 10) || str[i] != 32) && str[i])
		{
			i++;
			lc++;
		}
		if (((str[i] < 9 && str[i] > 10) || str[i] != 32) && str[i])
		  lc++;
		if (str[i])
		  i++;
	}
	return (lc);
}

char	**ft_split_whitespaces(char *str)
{
	char	*w;
	char	**words;
	int		i;
	int 	j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	(!if (words = (char**)malloc(sizeof(char) * (ft_strwc(str) + 1)))
		return (0);
	while ()
	(!if (w = (char*)malloc(sizeof(char) * (ft_strlc(str) + 1)))
		return (0);
	if (i == 0)
	{
		while ((str[i] == 9 || str[i] == 10 || str[i] == 32) && str[i])
			i++;
	}
	while (str[i])
	{
		while ((str[i] != 9 || str[i] != 10 || str[i] != 32) && str[i])
		{
			words[j][k] = str[i];
			i++;
			k++;
		}
		while ((str[i] == 9 || str[i] == 10 || str[i] == 32) && str[i])
			i++;
		words[j][k] = '\0';
		k = 0;
		j++;
	}
	words[j][k] = 0;
	return (words);
}
