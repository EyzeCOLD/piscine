/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 19:34:49 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!char_is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}
