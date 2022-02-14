/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:34:03 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/24 16:15:59 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	return (cnt);
}

int	ft_strlen_sum(int size, char **strs, char *sep)
{
	int	i;
	int	strlen_sum;
	int	sep_len;

	i = 0;
	strlen_sum = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		strlen_sum += ft_strlen(strs[i]);
		strlen_sum += sep_len;
		i++;
	}
	strlen_sum -= sep_len;
	return (strlen_sum);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	join_len;

	i = 0;
	join_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[join_len] = src[i];
		join_len++;
		i++;
	}
	dest[join_len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strlen_sum;
	char	*join;

	if (size <= 0)
	{
		join = malloc(1);
		*join = 0;
		return (join);
	}
	strlen_sum = ft_strlen_sum(size, strs, sep);
	join = (char *)malloc((strlen_sum + 1) * sizeof(char));
	i = 0;
	join[0] = '\0';
	while (i < size - 1)
	{
		ft_strcat(join, strs[i]);
		ft_strcat(join, sep);
		i++;
	}
	return (ft_strcat(join, strs[i]));
}
