/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:56:04 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/17 19:19:15 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_hint(int board[4][4], int *hint);
int	check_dv_col(int board[4][4], int col, int pnum);
int	check_dv_row(int board[4][4], int row, int pnum);

/*0값 찾아내서 있으면 if문 실행할 수 없도록 리턴 (0)*/
int	put_in_zero(int board[4][4], int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (board[*row][*col] == 0)
				return (0);
			*col += 1;
		}
		*row += 1;
	}
	return (1);
}

/*중복값이 없으면 if문 실행할 수 있도록 리턴 (1)*/
int	check_dv(int board[4][4], int row, int col, int pnum)
{
	if ((check_dv_row(board, row, pnum)) && (check_dv_col(board, col, pnum))
		&& (!(board[row][col])))
		return (1);
	return (0);
}

/*처음엔 0값을 찾고 0이 있으면 숫자 넣기*/
/*중복값도 찾기*/
int	solve(int board[4][4], int *hint)
{
	int	pnum;
	int	row;
	int	col;

	if (put_in_zero(board, &row, &col) && (check_hint(board, hint)))
		return (1);
	pnum = 1;
	while (pnum < 5)
	{
		if (check_dv(board, row, col, pnum))
		{
			board[row][col] = pnum;
			if (solve(board, hint))
				return (1);
			board[row][col] = 0;
		}
		pnum++;
	}
	return (0);
}
