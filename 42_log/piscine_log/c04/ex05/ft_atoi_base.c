/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonghle <jeonghle@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:43:27 by jeonghle          #+#    #+#             */
/*   Updated: 2021/10/20 11:57:27 by jeonghle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strstr_base(char *base, char *to_find)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == *to_find)
			return (&base[i]);
		i++;
	}
	return (0);
}

int	check_error(char *base)
{
	char	*check;
	int		check_i;

	check = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*check)
	{
		if (*check == '+' || *check == '-' || *check < 33)
			return (0);
		check_i = 1;
		while (*(check + check_i))
		{
			if (*(check + check_i) == *(check))
				return (0);
			check_i++;
		}
		check++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if (check_error(base))
	{
		i = 0;
		while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (ft_strstr_base(base, &str[i]))
		{
			result *= ft_strlen(base);
			result += ft_strstr_base(base, &str[i]) - base;
			i++;
		}
	}
	return (sign * result);
}
