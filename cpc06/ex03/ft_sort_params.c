/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:54:38 by juaho             #+#    #+#             */
/*   Updated: 2024/07/09 20:38:21 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	bubble_sort(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 0;
	while (j < argc)
	{
		i = 0;
		while (i < argc - 1 - j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				ft_swap_str(&argv[i], &argv[i + 1]);
			i++;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	bubble_sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
