/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 13:19:02 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/04 18:34:30 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			ft_ascendent(t_point *p,t_point *l, int color)
{
	int				ret;
	int				dif;

	p->cpt = p->yi - l->yi;
	ret = 0;
	if (dif > )
		ret = color + 51;
	if (p->y >= l->y * 2 && p->y < l->y)
		ret = color + 202;
	printf("p->y = %d l->y = %d\n", p->y, l->y);
	return (ret);
}

static int			ft_search_color(int z, t_map *m)
{

	int				rgb;

	rgb = 0;
	if (z >= m->max_z / 2)
		rgb = COLOR_ONE;
	else if (z >= 0 && z < m->max_z / 2)
		rgb = COLOR_TWO;
	else if (z < 0 && z > m->min_z / 2)
		rgb = COLOR_THREE;
	else if (z <= m->min_z / 2)
		rgb = COLOR_FOUR;
	return (rgb);
}

int					ft_color(t_map *m, int i, int j)
{
	int				dep_color;
	int				end_color;
	int				ret;

	ret = 0;
	dep_color = ft_search_color(m->pt[i][j].z, m);
	end_color = ft_search_color(m->pt[i][j + 1].z, m);
	if (j < m->sline)
	{
		if (m->pt[i][j].z < m->pt[i][j + 1].z)
			ret = ft_ascendent(&(m->pt[i][j]), &(m->pt[i][j + 1]), dep_color);
	}
	else
		ret = dep_color;
	return (ret);
}
