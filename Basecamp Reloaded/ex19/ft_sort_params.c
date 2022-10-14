/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:37:16 by jbillet           #+#    #+#             */
/*   Updated: 2022/03/29 01:01:22 by jbillet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	str_index;

	str_index = 0;
	while (str[str_index])
	{
		ft_putchar(str[str_index]);
		str_index++;
	}
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (!s2[i])
			return (s1[i]);
		else if (!s1[i])
			return (-s2[i]);
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		c_1;
	int		c_2;
	char	*temp;

	c_1 = 1;
	while (c_1 < argc)
	{
		c_2 = c_1 + 1;
		while (c_2 < argc)
		{
			if (ft_strcmp(argv[c_1], argv[c_2]) > 0)
			{
				temp = argv[c_1];
				argv[c_1] = argv[c_2];
				argv[c_2] = temp;
			}
			c_2++;
		}
		c_1++;
	}
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	else
	{
		ft_sort_params(argc, argv);
		while (argv[counter])
		{
			ft_putstr(argv[counter]);
			ft_putchar('\n');
			counter++;
		}
	}
	return (0);
}
