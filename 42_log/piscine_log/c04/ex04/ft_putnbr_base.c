/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:21:55 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/19 14:28:55 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	check_error(char *base)
{
	char	*check;
	int		check_i;

	check = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*check)
	{
		if (*check == '+' || *check == '-' || *check < 32)
			return (0);
		check_i = 1;
		while (*(check + check_i))
		{
			if (*(check + check_i) == *(check))
				return (0);
			check_i++;
		}
		check++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	unsigned_nbr;

	if (check_error(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			unsigned_nbr = (unsigned int)(nbr * (-1));
		}
		else
			unsigned_nbr = (unsigned int)nbr;
		base_len = ft_strlen(base);
		if (unsigned_nbr >= base_len)
		{
			ft_putnbr_base(unsigned_nbr / base_len, base);
			ft_putnbr_base(unsigned_nbr % base_len, base);
		}
		else
			write(1, base + unsigned_nbr, 1);
	}
}
