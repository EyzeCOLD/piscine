/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:27:07 by juaho             #+#    #+#             */
/*   Updated: 2024/07/05 10:55:46 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_recursion(int nb)
{
	char	number;

	if (nb / 10 != 0)
		ft_putnbr_recursion(nb / 10);
	number = '0' + (nb % 10);
	write(1, &number, 1);
}

void	ft_putnbr(int nb)
{
	char	minus;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		minus = '-';
		if (nb < 0)
		{
			nb *= -1;
			write(1, &minus, 1);
		}
		ft_putnbr_recursion(nb);
	}
}
