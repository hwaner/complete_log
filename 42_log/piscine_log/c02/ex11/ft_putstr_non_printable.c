/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:57:36 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/14 23:03:24 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_convert(unsigned char c)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putchar(base_16[c / 16]);
		ft_putchar(base_16[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base_16[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_hex_convert(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
