/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:54:23 by mleblanc          #+#    #+#             */
/*   Updated: 2021/03/29 18:19:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < length - 1 && sorted)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
