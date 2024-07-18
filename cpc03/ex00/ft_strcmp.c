/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:56:34 by juaho             #+#    #+#             */
/*   Updated: 2024/07/05 11:24:33 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (1)
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			break ;
		if (s1[index] - s2[index] != 0)
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
