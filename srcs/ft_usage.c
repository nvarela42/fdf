/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:51:10 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/21 18:54:44 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_usage(t_map *map)
{
	mlx_string_put(map->mlx, map->win, 0, 0, DEF_COLOR, "Move right :");
	mlx_string_put(map->mlx, map->win, 150, 0, DEF_COLOR, "press 'd' key");
	mlx_string_put(map->mlx, map->win, 0,20, DEF_COLOR, "Move left :"); 
	mlx_string_put(map->mlx, map->win, 150, 20, DEF_COLOR, "press 'a' key");
	mlx_string_put(map->mlx, map->win, 0, 40, DEF_COLOR, "Move up :");
	mlx_string_put(map->mlx, map->win, 150, 40, DEF_COLOR, "press 'w' key");
	mlx_string_put(map->mlx, map->win, 0, 60, DEF_COLOR, "Move down :");
	mlx_string_put(map->mlx, map->win, 150, 60, DEF_COLOR, "press 's' key");
	mlx_string_put(map->mlx, map->win, 0, 80, DEF_COLOR, "Up height :"); 
	mlx_string_put(map->mlx, map->win, 150, 80, DEF_COLOR, "press 'x' key");
	mlx_string_put(map->mlx, map->win, 0, 100, DEF_COLOR, "Down height :");
	mlx_string_put(map->mlx, map->win, 150, 100, DEF_COLOR, "press 'z' key");
	mlx_string_put(map->mlx, map->win, 0, 120, DEF_COLOR, "Reset map :");
	mlx_string_put(map->mlx, map->win, 150, 120, DEF_COLOR, "press 'r' key");
	mlx_string_put(map->mlx, map->win, 0, 140, DEF_COLOR, "Exit :");
	mlx_string_put(map->mlx, map->win, 150, 140, DEF_COLOR, "press 'esc' key");
}
