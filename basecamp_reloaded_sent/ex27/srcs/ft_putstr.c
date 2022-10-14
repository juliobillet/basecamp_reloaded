/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:16:43 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 05:44:08 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putstr(int output_type, char *str)
{
	int	str_index;

	str_index = 0;
	while (str[str_index] != '\0')
	{
		write(output_type, &str[str_index], 1);
		str_index++;
	}
	return ;
}
