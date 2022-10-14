/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:20:28 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/17 23:47:33 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_min_limit(int nb)
{
	if (nb == (2147483648 * (-1)))
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else
		return (0);
}

int	check_if_negative(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
		return (nb);
	}
	else
		return (nb);
}

void	ft_putnbr(int nb)
{
	int	nbr_as_char;

	if (is_min_limit(nb))
	{
		return ;
	}
	else
	{
		nb = check_if_negative(nb);
		if (nb < 10)
		{
			nbr_as_char = nb + 48;
			write(1, &nbr_as_char, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			nbr_as_char = (nb % 10) + 48;
			write(1, &nbr_as_char, 1);
		}
	}
}
