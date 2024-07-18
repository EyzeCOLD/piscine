/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:41:00 by juaho             #+#    #+#             */
/*   Updated: 2024/07/05 11:42:25 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	index;

	index = 0;
	while (s1[index])
	{
		if (s1[index] > s2[index])
			return (1);
		if (s1[index] < s2[index])
			return (-1);
		index++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	str_index;

	str_index = 0;
	while (str[str_index])
	{
		if (ft_strcmp(to_find, str + str_index) == 0)
			return (str + str_index);
		str_index++;
	}
	return (0);
}
