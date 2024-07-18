/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:29:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/17 19:24:38 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (ret);
}

void	free_struct(t_stock_str *arr, int index)
{
	index--;
	while (index >= 0)
		free(arr[index--].copy);
	free(arr);
}

t_stock_str	*allocate_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;
	int			str_len;

	arr = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (arr)
	{
		i = 0;
		while (i < ac)
		{
			str_len = ft_strlen(av[i]);
			arr[i].str = av[i];
			arr[i].size = str_len;
			arr[i].copy = (char *) malloc((str_len + 1) * sizeof(char));
			ft_strcpy(arr[i].copy, av[i]);
			if (arr[i].copy == NULL)
			{
				free_struct(arr, i);
				return (NULL);
			}
			i++;
		}
		arr[i].str = 0;
	}
	return (arr);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;

	arr = allocate_tab(ac, av);
	return (arr);
}
