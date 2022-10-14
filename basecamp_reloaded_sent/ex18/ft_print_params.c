/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 03:23:37 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/25 19:05:49 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	counter_1;
	int	counter_2;

	counter_1 = 1;
	if (argc < 2)
		return (0);
	else
	{
		while (counter_1 < argc)
		{
			counter_2 = 0;
			while (argv[counter_1][counter_2])
			{
				ft_putchar(argv[counter_1][counter_2]);
				counter_2++;
			}
			ft_putchar('\n');
			counter_1++;
		}
	}
	return (0);
}
