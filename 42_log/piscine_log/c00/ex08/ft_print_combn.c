/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:54:30 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/13 20:12:42 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_combn[10];
char	g_visited[10] = {-91, -91, -91, -91, -91, -91, -91, -91, -91, -91};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int max, int count)
{
	if (count == max)
	{
		write(1, g_combn, max);
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
	write(1, g_combn, max);
}

void	recur(int max, int index, int count)
{
	if (index == max)
	{
		print(max, count);
		return ;
	}
	while (count < 10)
	{
		if (g_visited[count] == -91)
		{
			g_visited[count] = 91;
			g_combn[index] = count + 48;
			recur(max, index + 1, count + 1);
		}
		g_visited[count] = -91;
		count++;
	}	
}

void	ft_print_combn(int n)
{
	recur(n, 0, 0);
}
