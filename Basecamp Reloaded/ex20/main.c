/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 01:03:01 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/29 21:58:09 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);

int	main(void)
{
	char	*string;
	char	*string_2;

	string = "teste123";
	string_2 = ft_strdup(string);
	string = "teste456";
	printf("teste: %s\n", string_2);
	printf("teste: %s\n", string);
	printf("teste len: %d\n", ft_strlen(string));
	free(string_2);
	return (0);
}
