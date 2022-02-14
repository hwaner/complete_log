/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:36:43 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 00:49:41 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	size;

	size = 4;
	printf("before: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("after: ");
	putarr(tab, size);
}
