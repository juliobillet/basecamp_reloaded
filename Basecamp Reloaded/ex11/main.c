/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:35:36 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/23 21:06:51 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *p_div, int *p_mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*p_div;
	int	*p_mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	p_div = &div;
	p_mod = &mod;
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	ft_div_mod(a, b, p_div, p_mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	return (0);
}
