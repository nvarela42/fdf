/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_height_events.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:27:26 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/18 15:36:17 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				ft_zkey(t_map *map)
{
	if (map->multz <= -50)
		return ;
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->multz--;
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}

void				ft_xkey(t_map *map)
{
	if (map->multz >= 50)
		return ;
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->multz++;
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}

void				ft_resetkey(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->multz = 1;
	map->scale = map->scaleinit;
	map->xpos = 0;
	map->ypos = 150;
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}
