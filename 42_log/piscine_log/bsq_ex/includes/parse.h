

#ifndef PARSE_H
# define PARSE_H

# include "bsq.h"

int		parse_map_info(t_map *map, char *info);
char	*read_line(int fd);
t_map	*read_file(char *file);
t_map	*read_stdin(void);
int		parse_map_info_sub(t_map *map, char *info);
char	*free_line(char *line);
int		read_map_sub(int *idx, t_map *map, char *line);
#endif
