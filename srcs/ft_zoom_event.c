/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zoom_event.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 19:07:29 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/18 15:32:37 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_zoomplus(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	if (map->scale < map->scaleinit * 2 && map->scaleinit / 2 != 0)
	{
		map->scale += (map->scaleinit / 7);
	}
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}

void			ft_zoomless(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	if (map->scale > 1)
	{
		map->scale -= (map->scaleinit / 7);
	}
	ft_search_coord(map);
	ft_search_size_for_win(map);
	ft_start_for_draw(ft_static());
}
