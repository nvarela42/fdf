#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include "libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <math.h>
# define SIZE 100
# define MARGIN 5
# define HEIGHT_MUL 1
# define MAX_XSIZE 1900
# define MAX_YSIZE 1600

typedef	struct s_map	t_map;
typedef struct s_point	t_point;

struct					s_map
{
	void				*mlx;
	void				*win;
	void				*image;
	char				*imgdata;
	int					bits_pixs;
	int					size_line;
	int					endian; 
	char				**recupline;
	t_point				**pt;
	int					nbline;
	int					s_map;
	int					sline;
	int					scale;
	int					xtrans;
	int					ytrans;
	int					max_x;
	int					max_y;
	int					xsize;
	int					ysize;
	int					xpos;
	int					ypos;
};

struct					s_point
{
	int					x;
	int					y;
	int					z;
	int					color;
	int					xi;
	int					yi;
	int					cumul;
	int					xdep;
	int					ydep;
	int					xend;
	int					yend;
	int					xplus;
	int					yplus;
};

int						ft_start_prog(int argc, char **argv);
t_map					*ft_static(void);
int						ft_read_fd(char *file, t_map *map);
void					ft_error(int n, char *str);
int						ft_data_processing(t_map *map);
void					ft_search_coord(t_map *map);
void					ft_mlx_init(t_map *map);
int						ft_start_for_draw(t_map *map);
void					ft_putpix_image(t_point *pt);
void					ft_drawline(t_point *pt);

#endif
