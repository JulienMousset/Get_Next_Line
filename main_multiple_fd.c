/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:55:33 by jmousset          #+#    #+#             */
/*   Updated: 2019/05/12 09:43:15 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		fd2;
	int		read;
	int		read2;
	int		line;
	char	*buff;
	char	*buff2;

	line = 1;
	if (ac == 3)
	{
		fd = open(av[1], O_RDONLY);
		fd2 = open(av[2], O_RDONLY);
		while ((read = get_next_line(fd, &buff)) &&
				(read2 = get_next_line(fd2, &buff2)))
		{
			printf("return (%d)  //  Line %d :  %s\n", read, line++, buff);
			printf("return (%d) // Line %d : %s\n", read2, line, buff2);
			free(buff);
		}
		close(fd);
	}
	return (0);
}
