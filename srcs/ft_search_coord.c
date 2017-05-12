/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_coord.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:08:49 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/12 18:40:16 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** Calculates xtrans and ytrans, the offset for the x and y points
** to obtain the isomatric perspective.
*/

static void		ft_cal_xtrans_ytrans(t_map *map)
{
	int			arraycal[6];

	arraycal[0] = 0 * map->scale + MARGIN;
	arraycal[1] = 0 * map->scale + MARGIN;
	arraycal[2] = 1 * map->scale + MARGIN;
	arraycal[3] = 0 * map->scale + MARGIN;
	arraycal[4] = arraycal[2] * cos(-45) - arraycal[3] * sin(-45);
	arraycal[5] = arraycal[2] * sin(-45) + arraycal[3] * cos(-45);
	map->xtrans = arraycal[4] - arraycal[0];
	map->ytrans = (arraycal[5] - arraycal[1]) / 4;
}

/*
** calculate the xi and yi point
*/

static void		ft_cal_xi_yi_point(t_point **point, t_map *map, int i, int j)
{
	while (i < map->s_map)
	{
		if (i > 0)
		{
			point[i][0].xi = point[i - 1][0].xi + map->xtrans;
			point[i][0].yi = point[i - 1][0].yi - map->ytrans;
		}
		while (j < map->sline)
		{
			if (j != 0)
			{
				point[i][j].xi = point[i][j - 1].xi + map->xtrans;
				point[i][j].yi = point[i][j - 1].yi + map->ytrans;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

/*
**recalculate the y point depending to the z point
**search the max size for x and y point
*/

static void		ft_cal_whith_z(t_point **point, t_map *map, int i, int j)
{
	map->max_x = point[0][0].xi;
	map->max_y = point[0][0].yi;
	while (i < map->s_map)
	{
		while (j < map->sline)
		{
			point[i][j].yi = point[i][j].yi - (point[i][j].z * map->multz);
			map->max_x = map->max_x < point[i][j].xi ?
			point[i][j].xi : map->max_x;
			map->max_y = map->max_y > point[i][j].yi ?
			point[i][j].yi : map->max_y;
			j++;
		}
		j = 0;
		i++;
	}
	map->max_y = map->max_y < 0 ? map->max_y * -1 : map->max_y;
	map->max_y += MARGIN;
}

/*
** recalculate the max_y and y point for replace in positive map
** "recalcule le max_y et le point y pour replacer la map en positif"
*/

static void		ft_cal_max_y(t_point **point, t_map *map, int i, int j)
{
	int			tmp;

	tmp = map->max_y;
	while (i < map->s_map)
	{
		while (j < map->sline)
		{
			point[i][j].yi += map->max_y;
			if (tmp < point[i][j].yi)
				tmp = point[i][j].yi;
			j++;
		}
		j = 0;
		i++;
	}
	map->max_y = tmp;
}

void			ft_search_coord(t_map *map)
{
	map->pt[0][0].xi = 5;
	map->pt[0][0].yi = 5;
	ft_cal_xtrans_ytrans(map);
	ft_cal_xi_yi_point(map->pt, map, 0, 1);
	ft_cal_whith_z(map->pt, map, 0, 0);
	ft_cal_max_y(map->pt, map, 0, 0);
	if (map->pt[0][map->sline - 1].xi > map->xsize &&
		map->pt[0][0].yi > map->ysize)
		map->xpos = map->pt[0][map->sline - 1].xi - (map->xsize / 2);
}
