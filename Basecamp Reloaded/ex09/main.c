/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:17:45 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/23 20:24:50 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number;
	int	*pointer;

	number = 35687;
	pointer = &number;
	printf("%d\n", number);
	ft_ft(pointer);
	printf("%d\n", number);
	return (0);
}
