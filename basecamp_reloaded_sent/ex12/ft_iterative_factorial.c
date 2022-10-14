/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:12:20 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/24 02:06:58 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	keep_track;
	int	factor_total;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		keep_track = nb - 1;
		factor_total = nb;
		while (keep_track > 1)
		{
			factor_total *= keep_track;
			keep_track--;
		}
		return (factor_total);
	}
}
