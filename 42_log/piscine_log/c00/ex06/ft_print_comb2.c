/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 01:24:03 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/08 20:51:11 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_digits(int z)
{
	char	c;

	c = z / 10 + 48;
	write(1, &c, 1);
	c = z % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_convert_digits(x);
			write(1, " ", 1);
			ft_convert_digits(y);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
