/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpix_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:07:43 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/15 13:25:51 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int		ft_search_color(int z, t_map *m)
{
	int			rgb;
	int			divisor;

	divisor = m->max_z / 4;
	rgb = 0xFFFFFF;
	if (z >= 0 && z < divisor)
		rgb = COLOR_ONE;
	else if (z >= divisor && z < divisor * 2)
		rgb = COLOR_TWO;
	else if (z >= m->max_z * 2 && z < divisor * 3)
		rgb = COLOR_THREE;
	else if (z >= divisor * 3 && z <= m->max_z)
		rgb = COLOR_FOUR;
	divisor = m->min_z / 4;
	if (z < 0 && z > divisor)
		rgb = COLOR_FIVE;
	else if (z <= divisor && z > divisor * 2)
		rgb = COLOR_SIX;
	else if (z <= divisor * 2 && z > divisor * 3)
		rgb = COLOR_SEVEN;
	else if (z <= divisor * 3 && z >= m->min_z)
		rgb = COLOR_HEIGHT;
	return (rgb);
}

void			ft_putpix_image_color(t_point *pt, t_map *map, int i, int j)
{
	int			y;
	int			color;
	int			ret_col;

	color = ft_search_color(map->pt[i][j].z, map);
	y = pt->x * 4 + pt->y * ft_static()->size_line;
	ret_col = mlx_get_color_value(ft_static()->mlx, color);
	ft_static()->imgdata[y] = (ret_col & 0xFF);
	ft_static()->imgdata[y + 1] = (ret_col & 0xFF00) >> 8;
	ft_static()->imgdata[y + 2] = (ret_col & 0xFF0000) >> 16;
}

void			ft_putpix_image(t_point *pt)
{
	int			i;
	int			color;

	color = mlx_get_color_value(ft_static()->mlx, pt->color);
	i = pt->x * 4 + pt->y * ft_static()->size_line;
	ft_static()->imgdata[i] = (color & 0xFF);
	ft_static()->imgdata[i + 1] = (color & 0xFF00) >> 8;
	ft_static()->imgdata[i + 2] = (color & 0xFF0000) >> 16;
}
