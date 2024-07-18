/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 19:37:41 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_uppercase(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!char_is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}
