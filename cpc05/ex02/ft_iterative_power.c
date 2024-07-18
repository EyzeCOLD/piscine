/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:27:08 by juaho             #+#    #+#             */
/*   Updated: 2024/07/09 10:59:35 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	i;

	if (nb == 1 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	pow = nb;
	i = 1;
	while (i < power)
	{
		pow *= nb;
		i++;
	}
	return (pow);
}
