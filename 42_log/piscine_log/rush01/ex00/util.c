/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:05:44 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/17 18:12:07 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');
			if (col == 3)
				col++;
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	check_dv_col(int board[4][4], int col, int pnum)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == pnum)
			return (0);
		row++;
	}
	return (1);
}

int	check_dv_row(int board[4][4], int row, int pnum)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == pnum)
			return (0);
		col++;
	}
	return (1);
}
