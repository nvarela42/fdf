/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_for_draw.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 03:43:42 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/11 11:58:17 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_init_hoript(t_map *map, int i, int j)
{

	map->pt[i][j].x = map->pt[i][j].xi;
	map->pt[i][j].y = map->pt[i][j].yi;
	if (j != (map->sline - 1))
	{
		map->pt[i][j].xend = map->pt[i][j + 1].xi;
		map->pt[i][j].yend = map->pt[i][j + 1].yi;
	}
	map->pt[i][j].xdep = map->pt[i][j].xend - map->pt[i][j].xi;
	map->pt[i][j].ydep = map->pt[i][j].yend - map->pt[i][j].yi;
	map->pt[i][j].xplus = (map->pt[i][j].xdep > 0) ? 1 : -1;
	map->pt[i][j].yplus = (map->pt[i][j].ydep > 0) ? 1 : -1;
}

int				ft_start_for_draw(t_map *map)
{
	int			i;
	int			j;
	t_point		*hoript;
	t_point		*vertipt;
;
	i = 0;
	if (!(hoript = (t_point *)malloc(sizeof(t_point))))
		return (-1);
	if (!(vertipt = (t_point *)malloc(sizeof(t_point))))
		return (-1);
	while (i < map->s_map)
	{
		j = 0;
		while (j < map->sline)
		{
			if (j != (map->sline - 1))
			{
				ft_init_hoript(map, i, j);
				hoript = &map->pt[i][j];
				ft_drawline(*map->pt);
		//		free(point);
			}
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(map->mlx, map->win, map->image, 100, 100);
	mlx_loop(map->mlx);
	return (0);
}
