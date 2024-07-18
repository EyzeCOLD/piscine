/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 19:43:02 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_printable(char c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!char_is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}
