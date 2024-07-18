/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:42:33 by juaho             #+#    #+#             */
/*   Updated: 2024/07/03 10:27:21 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	inside_word;
	char	*ret;

	ret = str;
	inside_word = 0;
	while (*str)
	{
		if (!char_is_alpha(*str))
			inside_word = 0;
		else
		{
			if (!inside_word)
			{
				inside_word = 1;
				if (char_is_alpha(*str) == 1)
					*str -= 32;
			}
			else if (char_is_alpha(*str) == 2)
				*str += 32;
		}
		str++;
	}
	return (ret);
}
