/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:08:49 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 12:27:24 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swp(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;

	index = 0;
	while (index < (size - 1) / 2)
	{
		ft_swp(tab + index, tab + size - 1 - index);
		index++;
	}
}
