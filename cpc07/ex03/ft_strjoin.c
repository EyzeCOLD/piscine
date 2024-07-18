/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:43:30 by juaho             #+#    #+#             */
/*   Updated: 2024/07/17 17:42:04 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_str_array_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	index;

	len = 0;
	index = 0;
	while (index < size)
	{
		len += ft_strlen(strs[index]);
		index++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ret;

	ret = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_total;
	char	*ret;
	int		index;

	len_total = 0;
	if (size > 0)
	{
		len_total = ft_str_array_total_len(size, strs, sep);
	}
	len_total++;
	ret = (char *) malloc(sizeof(char) * len_total);
	if (ret == NULL)
		return (NULL);
	ret[0] = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(ret, strs[index]);
		if (index + 1 < size)
			ft_strcat(ret, sep);
		index++;
	}
	return (ret);
}
