

#include "bsq.h"

int	make_map(t_map *map, int fd)
{
	int		y_read_num;
	char	*line;

	y_read_num = 0;
	map->x_len = 0;
	line = read_line(fd);
	while (line)
	{
		if (!read_map_sub(&y_read_num, map, line))
			return (0);
		line = read_line(fd);
	}
	if (y_read_num != map -> y_len)
	{
		free_map(map, y_read_num);
		return (0);
	}
	return (1);
}
