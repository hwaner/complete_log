/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:35:05 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/14 22:11:54 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	quick_sort(int array[], int start, int last)
{
	int	pivot;
	int	left;
	int	right;

	pivot = array[start];
	left = start + 1;
	right = last;
	while (left <= right)
	{
		while (array[left] < pivot)
			left++;
		while (array[right] > pivot)
			right--;
		if (left <= right)
			ft_swap(&array[left], &array[right]);
	}
	if (start < last)
	{
		ft_swap(&array[start], &array[right]);
		quick_sort(array, start, right - 1);
		quick_sort(array, right + 1, last);
	}
	return ;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	last;

	start = 0;
	last = size - 1;
	quick_sort(tab, start, last);
}
