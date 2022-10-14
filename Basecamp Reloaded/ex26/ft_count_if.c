/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 03:30:41 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 00:36:34 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;

	counter = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			counter++;
		tab++;
	}
	return (counter);
}
