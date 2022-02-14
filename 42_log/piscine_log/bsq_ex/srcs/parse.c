

#include "bsq.h"
int	parse_map_info(t_map *map, char *info)
{
	int	ret;

	ret = parse_map_info_sub(map, info);
	if (!ret)
		free(map);
	free(info);
	return (ret);
}

char	*read_line(int fd)
{
	char	*line;
	char	buff;
	int		idx;
	int		size;

	idx = 0;
	size = 2;
	line = (char *)malloc(size);
	if (!line)
		exit(0);
	while (read(fd, &buff, 1))
	{
		if (buff == '\n')
		{
			line[idx] = 0;
			break ;
		}
		if (idx + 1 == size)
			line = expand_size(line, &size);
		line[idx++] = buff;
	}
	if (idx == 0)
		return (free_line(line));
	return (line);
}

t_map	*read_map(int fd)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		exit(0);
	if (!parse_map_info(map, read_line(fd)))
		return (0);
	map->arr = (char **)malloc(sizeof(char *) * map->y_len);
	if (!map->arr)
		exit(0);
	if (!make_map(map, fd))
		return (0);
	return (map);
}

t_map	*read_stdin(void)
{
	return (read_map(0));
}

t_map	*read_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	return (read_map(fd));
}
