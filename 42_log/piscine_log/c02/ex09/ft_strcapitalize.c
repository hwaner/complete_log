/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:14:11 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/15 01:24:18 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (check == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
			check++;
		}
		else if (check > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += ('a' - 'A');
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A'))
			check = 0;
		else if ((str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			check = 0;
		else
			check++;
		i++;
	}
	return (str);
}
