/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:18:35 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/15 23:31:22 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void	ft_print_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int		ft_if_error(char *argv, int error)
{
	if (error == 2)
	{
		ft_print_error("ft_cat: ");
		ft_print_error(argv);
		ft_print_error(": No such file or directory\n");
		return (1);
	}
	if (error == 13)
	{
		ft_print_error("ft_cat: ");
		ft_print_error(argv);
		ft_print_error(": Permission denied\n");
		return (1);
	}
	if (error == 22)
	{
		ft_print_error("ft_cat: ");
		ft_print_error(argv);
		ft_print_error(": Is a directory\n");
		return (1);
	}
	return (0);
}

void	ft_stdin(void)
{
	char buf;

	while (read(0, &buf, 1))
		write(1, &buf, 1);
}

int		ft_display(int fd, char *argv)
{
	char	buf[28672];
	int		nchar;
	int		errno;

	nchar = 1;
	while (nchar)
	{
		if (ft_if_error(argv, errno))
			return (1);
		nchar = read(fd, buf, 28672);
		buf[28671] = '\0';
		write(1, buf, nchar);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[28672];
	int		errno;
	int		i;

	i = 1;
	if (argc < 2 || argv[1][0] == '-')
		ft_stdin();
	while (i < argc)
	{
		if (argv[i][0] == '-')
			ft_stdin();
		if ((fd = open(argv[i], O_RDONLY)) == -1)
			return (ft_if_error(argv[i], errno));
		if (ft_display(fd, argv[i]))
			return (1);
		if (close(fd) == -1)
			return (write(2, "close() error\n", 14) || 1);
		i++;
	}
	return (0);
}
