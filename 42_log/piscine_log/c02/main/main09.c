/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:22:23 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/12 15:23:25 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\nberfore = %s", str1);
	printf("\nafter = %s\n", ft_strcapitalize(str1));
	printf("\nbefore = %s", str2);
	printf("\nafter = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n\n", ft_strcapitalize(empty));
}
