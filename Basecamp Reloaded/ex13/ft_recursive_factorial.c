/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 02:22:30 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/24 21:50:00 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	counter;

	counter = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else
	{
		if (counter != 1)
			nb = nb * ft_recursive_factorial(counter - 1);
		return (nb);
	}
}
