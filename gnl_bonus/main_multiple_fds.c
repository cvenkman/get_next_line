/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_multiple_fds.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvenkman <cvenkman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:05:34 by jaleman           #+#    #+#             */
/*   Updated: 2021/10/11 16:04:03 by cvenkman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

int	main(int argc, char const *argv[])
{
	int fd;
	int fd_2;
	int i;
	char *line;
	int status;

	fd = open(argv[1], O_RDONLY);
	i = 1;
	while ((status = get_next_line(fd, &line)) == 1 && i < 500)
	{
		printf("[%d] %s\n", i++, line);
		free(line);
	}
	fd_2 = open(argv[2], O_RDONLY);
	close(fd);
	fd = fd_2;
	while ((status = get_next_line(fd, &line)) == 1)
	{
		printf("[%d] %s\n", i++, line);
		free(line);
	}
	return (argc);
}
