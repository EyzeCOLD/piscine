/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 12:32:56 by juaho             #+#    #+#             */
/*   Updated: 2024/07/01 13:21:50 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swp(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	sorted_elm;

	sorted_elm = 0;
	while (sorted_elm < size)
	{
		index = 0;
		while (index < size - 1 - sorted_elm)
		{
			if (*(tab + index) > *(tab + index + 1))
				ft_swp(tab + index, tab + index + 1);
			index++;
		}
		sorted_elm++;
	}
}
