/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:02:12 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 19:42:57 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter + 1);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	int		counter;
	char	*temp_str;

	counter = 0;
	src_len = ft_strlen(src);
	temp_str = malloc(sizeof(char *) * src_len);
	while (counter < src_len)
	{
		temp_str[counter] = src[counter];
		counter++;
	}
	return (temp_str);
}
