               
#include "bsq.h"

int	is_printable(char c)
{
    if (' ' <= c && c <= '~')
        return (1);
    return (0);
}

int	is_valid_map_info(t_map *map)
{
	if (is_printable(map->full)
		&& is_printable(map->obstacle)
		&& is_printable(map->empty))
		return (1);
	else
		return (0);
}

int	parse_map_info_sub(t_map *map, char *info)
{
	int	len;

	len = ft_strlen(info);
	if (!info || (len < 4))
		return (0);
	map->full = info[len - 1];
	map->obstacle = info[len - 2];
	map->empty = info[len - 3];
	if (map->empty == map->obstacle
		|| map->empty == map->full
		|| map->obstacle == map->full
		|| !is_valid_map_info(map))
		return (0);
	info[len - 3] = 0;
	map->y_len = ft_atoi(info);
	if (map->y_len == 0)
		return (0);
	return (1);
}

int	read_map_sub(int *idx, t_map *map, char *line)
{
	int	len;

	if (*idx == map->y_len || !ft_is_valid_map(line, map))
	{
		free(line);
		free_map(map, *idx);
		return (0);
	}
	len = ft_strlen(line);
	if (map->x_len == 0)
		map->x_len = len;
	if (len != map->x_len)
	{
		free_line(line);
		free_map(map, *idx);
		return (0);
	}
	map->arr[(*idx)++] = line;
	return (1);
}
