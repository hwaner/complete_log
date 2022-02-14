/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 00:23:59 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/24 21:38:13 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	unsigned int	unsigned_nbr;

	if (nbr < 0)
	{
		ft_putchar('-');
		unsigned_nbr = (unsigned int)(nbr * (-1));
	}
	else
		unsigned_nbr = (unsigned int)nbr;
	if (unsigned_nbr > 9)
	{
		ft_putnbr(unsigned_nbr / 10);
		ft_putnbr(unsigned_nbr % 10);
	}
	else
		ft_putchar(unsigned_nbr + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
