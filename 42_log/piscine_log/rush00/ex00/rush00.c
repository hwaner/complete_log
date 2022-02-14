/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:58:22 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/10 21:11:25 by byeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_width(int width, char f_column, char m_column, char l_column)
{
	if (width-- > 0)
	{
		ft_putchar(f_column);
		while (width-- > 1)
		{
			ft_putchar(m_column);
		}
		if (width == 0)
		{
			ft_putchar(l_column);
		}
		ft_putchar('\n');
	}
}

void	rush_height(int width, int height, char m_row, char blank)
{
	int	iteration;

	while (height-- > 2)
	{
		ft_putchar(m_row);
		iteration = 2;
		while (iteration++ < width)
		{
			ft_putchar(blank);
		}
		if (iteration == width + 1)
		{
			ft_putchar(m_row);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0)
	{
		if (y > 0)
		{
			rush_width(x, 'o', '-', 'o');
		}
		rush_height(x, y, '|', ' ');
		if (y > 1)
		{
			rush_width(x, 'o', '-', 'o');
		}
	}	
}
