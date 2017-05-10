/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:48:14 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/10 17:40:39 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
# define DEF_COLOR 0xFFFFFF
# define MAX_XSIZE 1900
# define MAX_YSIZE 1600
# define SCALE 100
# define COLOR_ONE 255000051
# define COLOR_TWO 102051051
# define COLOR_THREE 102102051
#define COLOR_FOUR 102102102

# ifdef __linux
# define ESCAPEKEY 65307
# define UPKEY 119
# define DOWNKEY 115
# define LEFTKEY 97
# define RIGHTKEY 101
# define ZKEY 122
# define XKEY 120
# define RESETKEY 114
# define PLUSKEY 69
# define LESSKEY 78
# define COLORKEY 99
# define RESETCOLORKEY 112
# else
# define ESCAPEKEY 53
# define UPKEY 13
# define DOWNKEY 1
# define LEFTKEY 0
# define RIGHTKEY 2
# define ZKEY 6
# define XKEY 7
# define RESETKEY 15
# define PLUSKEY 69
# define LESSKEY 78
# define COLORKEY 8
# define RESETCOLORKEY 35
# endif

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
	int					max_z;
	int					min_z;
	int					xsize;
	int					ysize;
	int					xpos;
	int					ypos;
	int					multz;
	int					color_version;
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
	int					cpt;
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
void					ft_putpix_image_color(t_point *pt, t_map *map, int i, int j);
void					ft_drawline(t_point *pt, int i, int j);
void					ft_search_size_for_win(t_map *map);
int						ft_manage_events(int keycode, void *param);
void					ft_zoomplus(t_map *map);
void					ft_zoomless(t_map *map);
void					ft_upkey(t_map *map);
void					ft_downkey(t_map *map);
void					ft_leftkey(t_map *map);
void					ft_rightkey(t_map *map);
void					ft_zkey(t_map *map);
void					ft_xkey(t_map *map);
void					ft_resetkey(t_map *map);
void					ft_colorkey(t_map *map);
void					ft_resetcolorkey(t_map *map);
void					ft_usage(t_map *map);
void					ft_free_fdf(t_map *map);

#endif
