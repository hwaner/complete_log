/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:45:06 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 19:46:32 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "123";
	char	src[] = "4567890";
	unsigned int	nb = 9;

	printf("dest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);

	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}
