/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position_events.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 16:45:09 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/11 14:59:37 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				ft_upkey(t_map *map)
{
	map->ypos -= 5;
	mlx_clear_window(map->mlx, map->win);
	mlx_put_image_to_window(map->mlx, map->win, map->image, map->xpos,
	map->ypos);
}

void				ft_downkey(t_map *map)
{
	map->ypos += 5;
	mlx_clear_window(map->mlx, map->win);
	mlx_put_image_to_window(map->mlx, map->win, map->image, map->xpos,
	map->ypos);
}

void				ft_leftkey(t_map *map)
{
	map->xpos -= 5;
	mlx_clear_window(map->mlx, map->win);
	mlx_put_image_to_window(map->mlx, map->win, map->image, map->xpos,
	map->ypos);
}

void				ft_rightkey(t_map *map)
{
	map->xpos += 5;
	mlx_clear_window(map->mlx, map->win);
	mlx_put_image_to_window(map->mlx, map->win, map->image, map->xpos,
	map->ypos);
}
