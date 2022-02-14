/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:47:02 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 15:56:30 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "this is source.";
	char dest[] = "";
	unsigned int n;

	n = 4;

	printf("beofore >\nsrc: %s\ndes: %s\nsize: %d\n\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("after >\nsrc: %s\ndes: %s\nsize: %d\n\n", src, dest, n);
	return (0);
}
