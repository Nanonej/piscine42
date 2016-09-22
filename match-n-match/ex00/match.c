/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 21:08:17 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/11 23:26:08 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		add_match(char *s1, char *s2)
{
	if (s2[0] == '*')
	{
		if (s1[0])
			return (add_match((s1 + 1), s2) + add_match(s1, (s2 + 1)));
		else
			return (add_match(s1, (s2 + 1)));
	}
	if (s1[0] == s2[0])
	{
		if (s1[0])
			return (add_match((s1 + 1), (s2 + 1)));
		else
			return (1);
	}
	return (0);
}

int		match(char *s1, char *s2)
{
	if (add_match(s1, s2) > 0)
		return (1);
	else
		return (0);
}
