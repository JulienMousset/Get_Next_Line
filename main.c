/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmousset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 14:58:51 by jmousset          #+#    #+#             */
/*   Updated: 2019/05/12 09:43:12 by jmousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		read;
	int		line;
	char	*buff;

	line = 1;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((read = get_next_line(fd, &buff)))
		{
			printf("return (%d)  //  Line %d : %s\n", read, line++, buff);
			free(buff);
		}
		close(fd);
	}
	return (0);
}
