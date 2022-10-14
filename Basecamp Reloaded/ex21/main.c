/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:41:24 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/30 06:41:59 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*create_array;
	int	counter;

	min = 1;
	max = 8;
	counter = 0;
	create_array = ft_range(min, max);
	if (create_array != NULL)
	{
		while (counter < (max - min))
		{
			printf("%d ", create_array[counter]);
			counter++;
		}
		printf("\n");
		free(create_array);
	}
	return (0);
}
