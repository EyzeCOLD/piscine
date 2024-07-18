/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:03:52 by juaho             #+#    #+#             */
/*   Updated: 2024/06/27 18:31:46 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define INT_MAX_VALUE 2147483647
#define INT_MIN_VALUE -2147483648
#define INT_MAX_LENGTH 10
#include <unistd.h>

void print_number(char neg_or_pos, int nb)
{
	char	ret_array[INT_MAX_LENGTH];
	int	index;
	int	number_leftover_digits;

	number_leftover_digits = nb;
	index = INT_MAX_LENGTH;
	while (number_leftover_digits > 0)
	{
		ret_array[index] = number_leftover_digits % 10;
		number_leftover_digits /= 10;
		index++;
	}

	while (index >= 0)
	{
		write(1, &ret_array[index], 1);
		index--;
	}
}

void ft_putnbr(int nb)
{
	char	neg_or_pos;

	neg_or_pos = 'p';
	if (nb <= INT_MIN_VALUE)
	{
		write(1, "-2147483648", INT_MAX_LENGTH + 1);
	}
	else if (nb < 0)
	{
		neg_or_pos = 'n';
	}
	else
	{
		print_number(neg_or_pos, nb);
	}
}
