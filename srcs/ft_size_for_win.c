/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_for_win.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 06:14:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/10 18:24:14 by nvarela          ###   ########.fr       */
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
	if (map->max_x < map->xsize || map->max_y < map->ysize)
	{
		if (map->max_x < 425)
			map->xsize = map->max_x + MARGIN + 425;
		else
			map->xsize = map->max_x + MARGIN;
		map->ysize = map->max_y + MARGIN + 120;
	}
	else if (map->max_x > map->xsize || map->max_y > map->ysize)
	{
		map->scale -= 50;
		ft_search_coord(ft_static());
		ft_search_size_for_win(ft_static());
	}
	return ;
}
