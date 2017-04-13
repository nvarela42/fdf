/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 02:24:58 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/07 05:14:52 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_mlx_init(t_map *map)
{
	map->mlx = mlx_init();
	map->win = mlx_new_window(map->mlx, 1000, 1000, "fdf");
	map->image = mlx_new_image(map->mlx, 1000, 1000);
	map->imgdata = mlx_get_data_addr(map->image, &(map->bits_pixs), \
		&(map->size_line), &(map->endian));

}
