/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:36:00 by juaho             #+#    #+#             */
/*   Updated: 2024/07/08 11:23:25 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_recursion(long int nb, char *base, int base_len)
{
	char	number;

	if (nb / base_len != 0)
		ft_putnbr_base_recursion(nb / base_len, base, base_len);
	number = base[nb % base_len];
	write(1, &number, 1);
}

// Returns length of base if base is valid, otherwise returns 0
int	is_valid_base(char *base)
{
	int	base_len;
	int	seen_chars_i;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return (0);
		seen_chars_i = 0;
		while (seen_chars_i < base_len)
		{
			if (base[base_len] == base[seen_chars_i])
				return (0);
			seen_chars_i++;
		}
		base_len++;
	}
	if (base_len < 2)
		return (0);
	return (base_len);
}

void	ft_putnbr_base(int nb, char *base)
{
	char		minus;
	int			base_len;
	long int	number;

	number = (long int) nb;
	minus = '-';
	if (number < 0)
	{
		number *= -1;
		write(1, &minus, 1);
	}
	base_len = is_valid_base(base);
	if (base_len)
		ft_putnbr_base_recursion(number, base, base_len);
}
