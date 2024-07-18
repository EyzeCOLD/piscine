/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:00:13 by juaho             #+#    #+#             */
/*   Updated: 2024/06/27 16:56:28 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2_digit_number(int i)
{
	const int	ascii_offset = 48;
	char		tens;
	char		ones;

	tens = i / 10 + ascii_offset;
	ones = i - i / 10 * 10 + ascii_offset;
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_2_digit_number(n1);
			write(1, " ", 1);
			print_2_digit_number(n2);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
