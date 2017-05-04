/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_static.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:23:29 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/04 13:39:36 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_fill_static_struct(t_map *map)
{
	map->mlx = NULL;
	map->win = NULL;
	map->image = NULL;
	map->recupline = NULL;
	map->imgdata = NULL;
	map->pt = NULL;
	map->nbline = 0;
	map->s_map = 0;
	map->sline = 0;
	map->scale = SCALE;
	map->xtrans = 0;
	map->ytrans = 0;
	map->max_x = 0;
	map->max_y = 0;
	map->max_z = 0;
	map->min_z = 0;
	map->xsize = MAX_XSIZE;
	map->ysize = MAX_YSIZE;
	map->xpos = 0;
	map->ypos = 0;
	map->multz = HEIGHT_MUL;
	map->color_version = 0;
}

t_map				*ft_static(void)
{
	static t_map	*map = NULL;
	static int		init = 0;

	if (!map && init == 0)
	{
		init = 1;
		if (!(map = (t_map*)malloc(sizeof(t_map))))
			return (NULL);
		ft_fill_static_struct(map);
	}
	return (map);
}
