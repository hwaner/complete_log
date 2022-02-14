

#include "bsq.h"

void	ft_strncpy(char *dst, char *src, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		++i;
	}
}

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		++len;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}
