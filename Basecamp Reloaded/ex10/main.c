/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:26:18 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/23 20:29:59 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	int *pointer_a;
	int *pointer_b;
	
	a = 10;
	b = 20;
	pointer_a = &a;
	pointer_b = &b;
	printf("a value: %d, b value: %d\n", a, b);
	ft_swap(pointer_a, pointer_b);
	printf("new a value: %d, new b value: %d\n", a, b);
	return (0);
}
