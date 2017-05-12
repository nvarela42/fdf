/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 15:51:10 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/12 14:42:57 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_print_usageone(t_map *map, int y)
{
	mlx_string_put(map->mlx, map->win, 0, 0, DEF_COLOR, "Move right:");
	mlx_string_put(map->mlx, map->win, 125, 0, DEF_COLOR, "press 'd' key");
	mlx_string_put(map->mlx, map->win, 0, y, DEF_COLOR, "Move left:");
	mlx_string_put(map->mlx, map->win, 125, y, DEF_COLOR, "press 'a' key");
	mlx_string_put(map->mlx, map->win, 0, y * 2 , DEF_COLOR, "Move up:");
	mlx_string_put(map->mlx, map->win, 125, y * 2, DEF_COLOR, "press 'w' key");
	mlx_string_put(map->mlx, map->win, 0, y *3, DEF_COLOR, "Move down:");
	mlx_string_put(map->mlx, map->win, 125, y * 3, DEF_COLOR, "press 's' key");
	mlx_string_put(map->mlx, map->win, 0, y * 4, DEF_COLOR, "Up height:");
	mlx_string_put(map->mlx, map->win, 125, y * 4, DEF_COLOR, "press 'x' key");
	mlx_string_put(map->mlx, map->win, 0, y * 5, DEF_COLOR, "Down height:");
	mlx_string_put(map->mlx, map->win, 125, y * 5, DEF_COLOR, "press \
	'z' key");
}

static void		ft_print_usagetwo(t_map *map, int y)
{
	mlx_string_put(map->mlx, map->win, 300, 0, DEF_COLOR, "Reset map:");
	mlx_string_put(map->mlx, map->win, 425, 0, DEF_COLOR, "press 'r' key");
	mlx_string_put(map->mlx, map->win, 300, y, DEF_COLOR, "Color map:");
	mlx_string_put(map->mlx, map->win, 425, y, DEF_COLOR, "press 'c' key");
	mlx_string_put(map->mlx, map->win, 300, y * 2, DEF_COLOR, "Reset color:");
	mlx_string_put(map->mlx, map->win, 425, y * 2, DEF_COLOR, "press 'p' key");
	mlx_string_put(map->mlx, map->win, 300, y * 3, DEF_COLOR, "Exit:");
	mlx_string_put(map->mlx, map->win, 425, y * 3, DEF_COLOR, "press 'esc' \
	key");
	mlx_string_put(map->mlx, map->win, 300, y * 4, DEF_COLOR, "Zoom ++:");
	mlx_string_put(map->mlx, map->win, 425, y * 4, DEF_COLOR, "press '+' key \
	(pav num)");
	mlx_string_put(map->mlx, map->win, 300, y * 5, DEF_COLOR, "Zoom -- :");
	mlx_string_put(map->mlx, map->win, 425, y * 5, DEF_COLOR, "press '-' key \
	(pav num)");
}

void			ft_usage(t_map *map)
{
	int			y;

	y = 20;
	ft_print_usageone(map, y);
	ft_print_usagetwo(map, y);
}
