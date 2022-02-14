/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:12:44 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 19:14:42 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char a[100];
	char b[100];
	strcpy(a, "A0234");
	strcpy(b, "A02232");
	printf("ft_strncmp : %i\n", ft_strncmp(a,b,6));
	printf("strncmp : %i\n", strncmp(a,b,6));
}
