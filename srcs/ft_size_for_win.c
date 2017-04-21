/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_for_win.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 06:14:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/21 19:27:27 by nvarela          ###   ########.fr       */
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
		map->xsize = map->max_x + MARGIN;
		map->ysize = map->max_y + MARGIN;
	}
	else if (map->max_x > map->xsize || map->max_y > map->ysize)
	{
		map->xsize = map->max_x + MARGIN;
		map->ysize = map->max_y + MARGIN;
	}
	return ;
}
