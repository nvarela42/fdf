/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 02:24:58 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/15 06:58:49 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_mlx_init(t_map *map)
{
	map->mlx = mlx_init();
	map->win = mlx_new_window(map->mlx, map->xsize, map->ysize, "fdf");
	map->image = mlx_new_image(map->mlx, map->max_x + 1, map->max_y + 1);
	map->imgdata = mlx_get_data_addr(map->image, &(map->bits_pixs), \
		&(map->size_line), &(map->endian));

}
