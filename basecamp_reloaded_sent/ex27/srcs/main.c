/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 04:46:41 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 05:44:01 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr(STD_ERR, "File name missing.\n");
	else if (argc > 2)
		ft_putstr(STD_ERR, "Too many arguments.\n");
	else
	{
		if (!ft_display_file(argv[1]))
			ft_putstr(STD_ERR, "Could not read the file.");
		else
			return (0);
	}
	return (1);
}
