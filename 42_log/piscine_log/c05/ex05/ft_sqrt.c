/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:05:14 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/19 16:33:27 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			else if (num >= 46341)
				return (0);
			num++;
		}
	}
	return (0);
}
