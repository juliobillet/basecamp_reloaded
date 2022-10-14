/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:37:08 by jbillet           #+#    #+#             */
/*   Updated: 2022/02/16 15:54:13 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_alpha(char c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	non_alf_chars;

	i = 0;
	non_alf_chars = 0;
	while (str[i] != '\0')
	{
		if (ft_verify_alpha(str[i]) == 0)
			non_alf_chars++;
		i++;
	}
	if (non_alf_chars > 0)
		return (0);
	else
		return (1);
}
