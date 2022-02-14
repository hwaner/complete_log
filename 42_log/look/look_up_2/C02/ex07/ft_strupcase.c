/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrigora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:22:27 by agrigora          #+#    #+#             */
/*   Updated: 2020/10/28 16:37:21 by agrigora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 'a' && c <= 'z')
			*(str + i) = c - ('a' - 'A');
		i++;
	}
	return (str);
}