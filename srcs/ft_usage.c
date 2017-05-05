/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:51:10 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 19:15:13 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_usage(t_map *map)
{
	int 	y;

	y = map->max_y;
	mlx_string_put(map->mlx, map->win, 0, y, DEF_COLOR, "Move right :");
	mlx_string_put(map->mlx, map->win, 150, y, DEF_COLOR, "press 'd' key");
	mlx_string_put(map->mlx, map->win, 0,y + 20, DEF_COLOR, "Move left :");
	mlx_string_put(map->mlx, map->win, 150,y + 20, DEF_COLOR, "press 'a' key");
	mlx_string_put(map->mlx, map->win, 0, y + 40, DEF_COLOR, "Move up :");
	mlx_string_put(map->mlx, map->win, 150, y + 40, DEF_COLOR, "press 'w' key");
	mlx_string_put(map->mlx, map->win, 0, y + 60, DEF_COLOR, "Move down :");
	mlx_string_put(map->mlx, map->win, 150, y + 60, DEF_COLOR, "press 's' key");
	mlx_string_put(map->mlx, map->win, 350, y, DEF_COLOR, "Up height :");
	mlx_string_put(map->mlx, map->win, 500, y, DEF_COLOR, "press 'x' key");
	mlx_string_put(map->mlx, map->win, 350, y + 20, DEF_COLOR, "Down height :");
	mlx_string_put(map->mlx, map->win, 500, y + 20, DEF_COLOR, "press 'z' key");
	mlx_string_put(map->mlx, map->win, 350, y + 40, DEF_COLOR, "Reset map :");
	mlx_string_put(map->mlx, map->win, 500, y + 40, DEF_COLOR, "press 'r' key");
	mlx_string_put(map->mlx, map->win, 350, y + 60, DEF_COLOR, "Color map:");
	mlx_string_put(map->mlx, map->win, 500, y + 60, DEF_COLOR, "press 'c' key");
	mlx_string_put(map->mlx, map->win, 350, y + 70, DEF_COLOR, "Reset color :");
	mlx_string_put(map->mlx, map->win, 500, y + 70, DEF_COLOR, "press 'p' key");
	mlx_string_put(map->mlx, map->win, 350, y + 80, DEF_COLOR, "Exit :");
	mlx_string_put(map->mlx, map->win, 500, y + 80, DEF_COLOR, "press 'esc' key");
}
