/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:21:45 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 18:31:56 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char a[100];
	char b[100];
	strcpy(a, "A0z");
	strcpy(b, "A02");
	printf("ft_strcmp : %i\n", ft_strcmp(a,b));
	printf("strcmp : %i\n", strcmp(a,b));
}
