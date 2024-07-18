/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:18:56 by juaho             #+#    #+#             */
/*   Updated: 2024/07/05 20:25:42 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
	{
		dest_len = size;
		return (dest_len + src_len);
	}
	index = 0;
	while ((src_len + index) < (size - dest_len) && src[index])
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[size - 1] = '\0';
	return (dest_len + src_len);
}
