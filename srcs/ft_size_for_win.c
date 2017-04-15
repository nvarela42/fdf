/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_for_win.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 06:14:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/15 10:01:36 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** define the new size for windows
**"defini le nouveau format de win"
*/

static void		ft_new_size_for_win(t_map *map)
{
	int			i;
	int			j;
	int			tmp[2];

	tmp[0] = map->pt[map->s_map - 1][map->sline -1].xi;
	tmp[1] = map->pt[map->s_map - 1][0].yi;
	i = 0;
	while (i < map->s_map)
	{
		j = 0;
		while (j < map->sline)
		{
			if (tmp[0] < map->pt[i][j].xi)
				tmp[0] = map->pt[i][j].xi;
			if (tmp[1] < map->pt[i][j].yi)
				tmp[1] = map->pt[i][j].yi;
			j++;
		}
		j = 0;
		i++;
	}
	map->xsize = tmp[0] >= MAX_XSIZE ? MAX_XSIZE : tmp[0] + MARGIN * 2;
	map->ysize = tmp[1] >= MAX_YSIZE ? MAX_YSIZE : tmp[1] + MARGIN * 2;
}

/*
** change size of scale, fisrt position or max position to fit the map size
**"change la taille de l'echelle, les position de depart ou les positions max
** pour s'adapter a la taille de la map envoyee"
*/

void			ft_search_size_for_win(t_map * map)
{
	if (map->max_x > map->xsize || map->max_y > map->ysize)
	{
		while (map->scale > 1)
		{	
			map->scale--;
			ft_search_coord(map);
			if (map->max_x < map->xsize && map->max_y < map->ysize)
			{
				map->xpos = map->pt[0][0].xi - MARGIN;
				map->ypos = map->pt[0][map->sline - 1].yi;
				return;
			}
		}
		map->xpos = map->pt[0][0].xi - MARGIN;
		map->ypos = map->pt[0][map->sline - 1].yi;
		ft_new_size_for_win(map);
		return;
	}
	else if (map->max_x < map->xsize && map->max_y < map->ysize)
	{
		map->xsize = map->max_x + MARGIN;
		map->ysize = map->max_y + MARGIN;
	}
	return;

}
