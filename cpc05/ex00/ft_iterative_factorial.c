/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:12:29 by juaho             #+#    #+#             */
/*   Updated: 2024/07/08 18:16:12 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	n;

	if (nb < 0)
		return (0);
	n = 2;
	fac = 1;
	while (n <= nb)
		fac *= n++;
	return (fac);
}
