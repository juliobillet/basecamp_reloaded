/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:44:01 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/30 05:28:07 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	array_len;
	int	*int_array;

	if (min >= max)
		return (NULL);
	counter = min;
	array_len = max - min;
	int_array = malloc(sizeof(int) * array_len);
	counter = 0;
	while (counter < array_len)
	{
		int_array[counter] = min + counter;
		counter++;
	}
	return (int_array);
}
