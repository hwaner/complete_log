/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 01:38:52 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/17 18:19:07 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print(int board[4][4]);
int		solve(int board[4][4], int *hint);

int	create_board(int *hint)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	if (solve(board, hint))
		print(board);
	else
		write(1, "Error\n", 6);
	return (0);
}

int	check_hint_16(char *arr, int *hint)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (arr[i])
	{
		if (arr[0] == ' ' || (arr[31] == ' '))
			return (0);
		if ((arr[i] >= '1' && arr[i] <= '4') && ((arr[i + 1] == ' ')
				|| ((!(arr[i + 1])) && (arr[i - 1] == ' '))))
		{
			hint[cnt] = (arr[i] - '0');
			cnt++;
			i++;
		}
		if (arr[i] == ' ' && ((arr[i - 1] >= '1' && arr[i - 1] <= '4')
				&& (arr[i + 1] >= '1' && arr[i + 1] <= '4')))
			i++;
		else
			return (cnt);
	}
	return (cnt);
}

int	main(int argc, char **argv)
{
	int	hint[16];
	int	i;

	i = 0;
	if (argc == 2)
	{
		i = check_hint_16(argv[1], hint);
		if (i == 16)
			create_board(hint);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
