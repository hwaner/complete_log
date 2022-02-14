

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_square{
	int		x;
	int		y;
	int		len;
}				t_square;

typedef struct s_map{
	char	full;
	char	empty;
	char	obstacle;
	int		x_len;
	int		y_len;
	char	**arr;
}				t_map;
#endif
