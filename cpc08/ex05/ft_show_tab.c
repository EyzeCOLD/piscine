/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:18:35 by juaho             #+#    #+#             */
/*   Updated: 2024/07/17 19:35:54 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	ft_putnbr(int i)
{
	if (i / 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}

void	ft_show_tab(t_stock_str *par)
{
	int	index;

	index = 0;
	while (par[index].str)
	{
		ft_putstr(par[index].str);
		ft_putchar('\n');
		ft_putnbr(par[index].size);
		ft_putchar('\n');
		ft_putstr(par[index].copy);
		ft_putchar('\n');
		index++;
	}
}
