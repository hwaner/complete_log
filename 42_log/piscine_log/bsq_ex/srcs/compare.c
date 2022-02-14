

#include "bsq.h"

int	ft_min(int a, int b, int c)
{
	int		min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

int	cmp(int a, int b)
{
	if (a < b)
		return (1);
	return (0);
}
