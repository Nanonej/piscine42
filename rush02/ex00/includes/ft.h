/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 16:57:08 by rmonnier          #+#    #+#             */
/*   Updated: 2016/09/18 19:24:38 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

int		count_lin(char *memo);
int		count_col(char *memo);
int		ft_tab_cmp(char *tab1, char *tab2);
char	*ft_readpipe(int ret, int i, int n);
char	ft_def_char_by_pos(int x, int y, int column, int line);
char	*colle00(int x, int y);
char	*colle01(int x, int y);
char	*colle02(int x, int y);
char	*colle03(int x, int y);
char	*colle04(int x, int y);
int		ft_putcolle00(char *to_cmp, int x, int y, int first);
int		ft_putcolle01(char *to_cmp, int x, int y, int first);
int		ft_putcolle02(char *to_cmp, int x, int y, int first);
int		ft_putcolle03(char *to_cmp, int x, int y, int first);
int		ft_putcolle04(char *to_cmp, int x, int y, int first);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

#endif
