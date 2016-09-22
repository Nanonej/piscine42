/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:29:44 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/06 11:31:10 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;
	int len;

	i = 0;
	k = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[k] != '\0')
	{
		while (str[k + i] == to_find[i])
		{
			if (i == (len - 1))
				return (str + k);
			i++;
		}
		i = 0;
		k++;
	}
	return (0);
}
