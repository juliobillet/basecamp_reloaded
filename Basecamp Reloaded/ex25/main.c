/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:57:19 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/01 04:35:57 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

int	main(void)
{
	int	tab[] = {1, 0, 2, 0, 366, 0, 4, 0, 55, 0, 3466, 0, 7};
	int	length;

	length = 13;
	ft_foreach(tab, length, &ft_putnbr);
	printf("\n");
}
