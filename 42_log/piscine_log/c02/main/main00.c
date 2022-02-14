/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:59:58 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 03:08:46 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	source[] = "this is source string";
	char	destination[] = "this is destination string.";
	char	*dest;

	printf("before >\nsrc: %s, dest: %s\n\n", source, destination);

    dest = ft_strcpy(destination, source);

	printf("after >\nsrc: %s, dest: %s\n", source, destination);
	return (0);
}
