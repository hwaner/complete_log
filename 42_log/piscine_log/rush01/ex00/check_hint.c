/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_hint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 03:17:13 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/17 16:51:26 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int board[4][4], int hint, int col)
{
	int	i;
	int	visible_box;
	int	box;

	i = 1;
	visible_box = 1;
	box = board[0][col];
	while (i < 4)
	{
		if (board[i][col] > box)
		{
			box = board[i][col];
			visible_box++;
		}
		i++;
	}
	if (visible_box == hint)
		return (0);
	return (1);
}

int	check_coldown(int board[4][4], int hint, int col)
{
	int	i;
	int	visible_box;
	int	box;

	i = 2;
	visible_box = 1;
	box = board[3][col];
	while (i >= 0)
	{
		if (board[i][col] > box)
		{
			box = board[i][col];
			visible_box++;
		}
		i--;
	}
	if (visible_box == hint)
		return (0);
	return (1);
}

int	check_rowleft(int board[4][4], int hint, int row)
{
	int	i;
	int	visible_box;
	int	box;

	i = 1;
	visible_box = 1;
	box = board[row][0];
	while (i < 4)
	{
		if (board[row][i] > box)
		{
			box = board[row][i];
			visible_box++;
		}
		i++;
	}
	if (visible_box == hint)
		return (0);
	return (1);
}

int	check_rowright(int board[4][4], int hint, int row)
{
	int	i;
	int	visible_box;
	int	box;

	i = 2;
	visible_box = 1;
	box = board[row][3];
	while (i >= 0)
	{
		if (board[row][i] > box)
		{
			box = board[row][i];
			visible_box++;
		}
		i--;
	}
	if (visible_box == hint)
		return (0);
	return (1);
}

int	check_hint(int board[4][4], int *hint)
{
	int	i;

	i = 0;
	while (hint[i])
	{
		if (i >= 0 && i <= 3)
			if (check_colup(board, hint[i], i))
				return (0);
		if (i >= 4 && i <= 7)
			if (check_coldown(board, hint[i], i - 4))
				return (0);
		if (i >= 8 && i <= 11)
			if (check_rowleft(board, hint[i], i - 8))
				return (0);
		if (i >= 12 && i <= 15)
			if (check_rowright(board, hint[i], i - 12))
				return (0);
		i++;
	}
	return (1);
}
