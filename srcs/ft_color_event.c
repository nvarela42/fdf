/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_event.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:50:14 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/11 18:58:35 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				ft_colorkey(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->color_version = 1;
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}

void				ft_resetcolorkey(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->color_version = 0;
	ft_search_coord(ft_static());
	ft_start_for_draw(ft_static());
}
