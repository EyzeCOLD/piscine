/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 20:14:38 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if (char_is_lowercase(*str))
			*str -= 32;
		str++;
	}
	return (ret);
}
