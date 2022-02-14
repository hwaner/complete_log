/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:34:39 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 19:37:04 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = ", world!";

	printf("dest = %s\nsrc = %s\n", dest, src);

	ft_strcat(dest, src);
	printf("after = %s\n\n", dest);

	return (0);
}
