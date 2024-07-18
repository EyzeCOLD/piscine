/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:55:49 by juaho             #+#    #+#             */
/*   Updated: 2024/07/05 11:39:08 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			return (0);
		if (s1[index] - s2[index] != 0)
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
