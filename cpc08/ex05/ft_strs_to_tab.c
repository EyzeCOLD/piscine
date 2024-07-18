/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:29:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/16 16:46:29 by juaho            ###   ########.fr       */
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

t_stock_str	*ft_strs_to_tab(int ac, char **av)
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
			arr[i].size = ft_strlen(av[i]);
			arr[i].str = av[i];
			str_len = ft_strlen(av[i]) + 1;
			arr[i].copy = (char *) malloc(str_len * sizeof(char));
			if (arr[i].copy)
			{
				ft_strcpy(arr[i].copy, av[i]);
			}
			else
				return (0);
			i++;
		}
		arr[i].str = 0;
	}
	return (arr);
}
