/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_events.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 19:07:29 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/21 20:17:36 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void			ft_zoomplus(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->scale += 20;
	ft_search_coord(ft_static());
	ft_search_size_for_win(ft_static());
	ft_start_for_draw(ft_static());
}



static void			ft_zoomless(t_map *map)
{
	mlx_clear_window(map->mlx, map->win);
	mlx_destroy_image(map->mlx, map->image);
	mlx_destroy_window(map->mlx, map->win);
	map->scale += 50;
	ft_search_coord(map);
	if ((map->max_x < map->xsize && map->max_y < map->ysize))
	{
		map->xpos= map->pt[0][0].xi - MARGIN;
		map->ypos = (map->pt[0][map->sline - 1].yi);
		return ;
	}
	map->xpos = map->pt[0][0].xi - MARGIN;
	map->ypos = (map->pt[0][map->sline - 1].yi);
	ft_search_size_for_win(ft_static());
	ft_start_for_draw(ft_static());
}

int				ft_mouse_events(int button, void *param)
{
	t_map		*mouse;

	mouse = (t_map *)param;
	printf("%d\n", button);
	if (button == RIGHTMOUSE)
		ft_zoomless(mouse);
	if(button == LEFTMOUSE)
		ft_zoomplus(mouse);
	return (0);
}
