/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:07:23 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/13 00:27:53 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int size = 7;
	unsigned int result;

	printf("dest = %s\nsrc = %s\nsize = %d\n\n", dest, src, size);
	
	result = ft_strlcat(dest, src, size);
	printf("dest(cat) = %s\nsize(after) = %d\n", dest, result);

	return (0);
}
