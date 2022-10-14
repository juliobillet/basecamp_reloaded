/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:41:39 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/25 03:04:41 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*string_1;
	char	*string_2;

	string_1 = "qualquer texto";
	string_2 = "qualquer texto";
	printf("%d\n", ft_strcmp(string_1, string_2));
	return (0);
}
