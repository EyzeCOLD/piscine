/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/03 10:27:43 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_uppercase(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if (char_is_uppercase(*str))
			*str += 32;
		str++;
	}
	return (ret);
}
