/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 12:18:35 by aridolfi          #+#    #+#             */
/*   Updated: 2016/09/14 19:04:28 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		nchar;
	char	buf[4096];

	nchar = 1;
	if (argc < 2)
		return (write(2, "File name missing.\n", 19) || 1);
	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20) || 1);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (write(2, "open() error\n", 13) || 1);
	while (nchar)
	{
		nchar = read(fd, buf, 4096);
		buf[4095] = '\0';
		write(1, buf, nchar);
	}
	if (close(fd) == -1)
		return (write(2, "close() error\n", 14) || 1);
	return (0);
}
