/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 06:21:37 by jbillet           #+#    #+#             */
/*   Updated: 2022/04/02 00:40:23 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));
int	ft_str_is_alpha(char *str);

int	ft_two_alpha_char_string(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	if (counter == 2 && ft_str_is_alpha(str) == 1)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	*tab[] = {"KLJGBLKJHFV", "jK", "nçkl789807", "kjhbkjg", "67", "g7", 0};

	printf("%d\n", (ft_count_if(tab, ft_two_alpha_char_string)));
	return (0);
}
// {"KLJGBLKJHFV", "jK", "nçkl789807", "kjhbkjg", 0};
// 1
// {"KLJGBLKJHFV", "jK", "nçkl789807", "kjhbkjg", "67", "g7", 0};
// 1
// {"KLJGBLKJHFV", "jK", "nçkl789807", "kjhbkjg", "gH", 0};
// 2
// {"KLJGBLKJHFV", "nçkl789807", "kjhbkjg", 0};
// 0
// {"KLJGBLKJHFV", "jK", "nçkl789807", "kjhbkjg", "67", "g7", "gH", "aa", 0};
// 3
