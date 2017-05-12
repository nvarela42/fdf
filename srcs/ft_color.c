/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 13:19:02 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 18:39:22 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
/*
static int			ft_dif_color(int color)
{
	int				ret;

	ret = 0;
	if (color == COLOR_ONE)
		ret = 1;
	if (color == COLOR_TWO)
		ret = 2;
	if (color == COLOR_THREE)
		ret = 3;
	if (color == COLOR_FOUR)
		ret = 4;
	return (ret);
}
static int			ft_descen(t_map *m, int depco, int endco, int i, int j)
{
	int				ret;
	int				dif;

	ret = 0;
	dif = ft_dif_color(endco) - ft_dif_color(depco);
	if (depco == COLOR_ONE)
		ret = ft_desc_one(dif, m, i, j);
	if (depco == COLOR_TWO)
		ret = ft_desc_two(dif, m->pt[i][j].cpt, m->pt[i][j + 1].z);
	if (depco == COLOR_THREE)
		ret = ft_desc_three(dif, m->pt[i][j].cpt, m->pt[i][j + 1].z);
	if (depco == COLOR_FOUR)
		ret = COLOR_FOUR;
	return (ret);
}
static int			ft_ascen(t_map *m, int depco, int endco, int i, int j)
{
	int				ret;
	int				dif;

	dif = ft_dif_color(depco) - ft_dif_color(endco);
	if (depco == COLOR_ONE)
		ret = COLOR_ONE;
	if (depco == COLOR_TWO)
		ret = ft_asc_two(dif, m->pt[i][j].cpt, m->pt[i][j + 1].z);
	if (depco == COLOR_THREE)
		ret = ft_asc_three(dif, m->pt[i][j].cpt, m->pt[i][j + 1].z);
	if (depco == COLOR_FOUR)
		ret = ft_asc_four(dif, m->pt[i][j].cpt, m->pt[i][j + 1].z);
	return (ret);
}
*/
static int			ft_search_color(int z, t_map *m)
{
	int				rgb;

	rgb = 0;
	if (z >= m->max_z / 2)
		rgb = COLOR_ONE;
	if (z >= 0 && z < m->max_z / 2)
		rgb = COLOR_TWO;
	if (z < 0 && z > m->min_z / 2)
		rgb = COLOR_THREE;
	if (z <= m->min_z / 2)
		rgb = COLOR_FOUR;
	return (rgb);
}

int					ft_color(t_map *m, int i, int j)
{
	int				depco;
	int				endco;
	int				ret;

	ret = 0;
	depco = ft_search_color(m->pt[i][j].z, m);
	endco = ft_search_color(m->pt[i][j + 1].z, m);
	/*if (j < m->sline)
	{
		if (m->pt[i][j].z < m->pt[i][j + 1].z)
		{
			printf("OK\n");
			ret = ft_ascen(m, depco, endco, i, j);
			if (ret == 0)
				ret = depco;
			// printf("ret asc = %d\n", ret);
			 printf("cp asc = %d\n", m->pt[i][j].cpt);
		}
		if (m->pt[i][j].z > m->pt[i][j + 1].z)
		{
			ret = ft_descen(m, depco, endco, i, j);
			if (ret == 0)
				ret = depco;
			// printf("ret desc = %d\n", ret);
			// printf("cp desc = %d\n", m->pt[i][j].cpt);
		}
	}
	else*/
	ret = depco;
	//printf ("color = %d\n", ret);
	return (ret);
}
