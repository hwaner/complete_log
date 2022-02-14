/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:59:54 by mleblanc          #+#    #+#             */
/*   Updated: 2021/03/13 10:59:56 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int width, char c1, char c2, char c3);

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	ft_print_line(x, 'A', 'B', 'A');
	i = 1;
	while (i < y - 1)
	{
		ft_print_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		ft_print_line(x, 'C', 'B', 'C');
}
