/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_height_events.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 17:27:26 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/18 19:12:09 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				ft_zkey(t_map *map)
{
	if (map->multz <= 1)
		return;
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->multz--;
	ft_search_coord(ft_static());
	ft_search_size_for_win(ft_static());
	ft_start_for_draw(ft_static());
}

void				ft_xkey(t_map *map)
{
	if (map->multz >= 20)
		return;
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->multz++;
	ft_search_coord(ft_static());
	ft_search_size_for_win(ft_static());
	ft_start_for_draw(ft_static());
}
