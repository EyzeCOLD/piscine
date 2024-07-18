/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 18:07:29 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_numer(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!char_is_numer(*str))
			return (0);
		str++;
	}
	return (1);
}
