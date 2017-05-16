/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_for_win.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 06:14:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/16 16:05:24 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** define the new size for windows
** change size of scale, fisrt position or max position to fit the map size
**"change la taille de l'echelle, les position de depart ou les positions max
** pour s'adapter a la taille de la map envoyee"
*/

void			ft_search_size_for_win(t_map *map)
{
	if (map->max_x > map->xsize || map->max_y > map->ysize)
	{
		while (map->scale > 1)
		{
			map->scale--;
			ft_search_coord(ft_static());
			if (map->max_x < map->xsize && map->max_y < map->ysize)
			{
				map->xpos = map->pt[0][0].x - MARGIN;
				map->ypos =(map->pt[0][map->s_map - 1].y) + 150;
				if (map->scaleinit == 0)
					map->scaleinit = map->scale;
				return ;
			}
		}
	}
	if (map->scaleinit == 0)
		map->scaleinit = map->scale;
	map->xpos = map->pt[0][0].x - MARGIN;
	map->ypos = (map->pt[0][map->s_map - 1].y) + 150;
	return ;
}
