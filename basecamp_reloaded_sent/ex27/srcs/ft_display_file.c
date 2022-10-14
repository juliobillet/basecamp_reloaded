/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 02:43:36 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 19:52:37 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_display_file(char *path_name)
{
	int		fd;
	int		read_return;
	char	buf[1];

	fd = open(path_name, O_RDONLY);
	read_return = 1;
	if (fd < 0)
		return (0);
	while (read_return != 0)
	{
		read_return = read(fd, buf, 1);
		if (read_return < 0)
			return (0);
		else if (read_return == 0)
			return (1);
		write(STD_OUT, &buf, 1);
	}
	close(fd);
	return (1);
}
