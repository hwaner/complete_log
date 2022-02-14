/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:59:58 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 03:37:40 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[] = "this is source string";
	char	destination[] = "this is destination string.";
	unsigned int	n;

	n = 15;

	printf("before >\nsrc: %s, dest: %s\n\n", source, destination);

	ft_strncpy(destination, source, n);

	printf("after >\nsrc: %s, dest: %s\n", source, destination);
	return (0);
}
