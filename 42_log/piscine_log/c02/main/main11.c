/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:47:02 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 17:39:43 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char	str[] = "Coucou\ntu vas vien ?";

	printf("beofore >\n%s\n\n", str);

    printf("after >\n");
	ft_putstr_non_printable(str);

	return (0);
}
