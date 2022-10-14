/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:02:12 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/29 21:49:35 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*temp_str;
	int		counter;

	counter = 0;
	src_len = ft_strlen(src);
	temp_str = malloc((src_len) * 1);
	while (counter < src_len)
	{
		temp_str[counter] = src[counter];
		counter++;
	}
	return (temp_str);
}
