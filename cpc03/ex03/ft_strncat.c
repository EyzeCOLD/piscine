/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:09:22 by juaho             #+#    #+#             */
/*   Updated: 2024/07/04 10:24:23 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_d;
	unsigned int	index_s;

	index_d = 0;
	index_s = 0;
	while (dest[index_d])
		index_d++;
	while (src[index_s] && index_s < nb)
		dest[index_d++] = src[index_s++];
	dest[index_d] = '\0';
	return (dest);
}
