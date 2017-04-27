/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 13:19:02 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/27 08:22:44 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
** check the char color format and return the result in int
*/

static int			ft_asc(int dco, int cp, int base, int calc)
{
	int				dif;
	int				ret;

	printf(GREY"calc = %d\n", calc);
	printf(GREY"OK\n");;
	ret = 0;
	if (calc == 0)
		return (0);
	dif = base / (calc * 3);
	if (calc == 4)
	{ 
		printf(PURPLE"OK\n");
		ret = ft_color_twelve(dco, cp, base);
		return (ret);
	}
	return (0);
}

static int			ft_init_var(int d_co, int e_co, t_point *p, t_point *l)
{
	int		div;
	int		cal_dco;
	int		cal_eco;

	cal_dco = ft_trans(d_co);
	cal_eco = ft_trans(e_co);
/*	if (p->z >= l->z)
	{
		if (p->cpt == 1)
			p->cpt = p->z - last->z;
		div = p->z - l->z;	
		div = ft_div((cal_eco / cal_dco), div);
		p->cpt -= div;
		return (ft_des(p->cpt, (d_co, e_co, (p->z - l->z),(cal_eco / cal_dco)));	
	}*/
	if (p->z < l->z)
	{
		if (p->cpt == 1)
			p->cpt = l->z -p->z;
		div = l->z - p->z;
		div = ft_div((cal_dco/ cal_eco), div);
		p->cpt = p->cpt - div;
		return (ft_asc(d_co, p->cpt, (l->z - p->z), (cal_dco / cal_eco)));
	}
	return(0);
}

static int			ft_search_color(int z, t_map *m)
{

	int				rgb;

	rgb = 0;
	if (z >= 0 && z < m->max_z / 2)
		rgb = COLOR_ONE;
	else if (z >= m->max_z / 2)
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

	dep_color = 0;
	end_color = 0;

	if (j < m->sline)
	{
		dep_color = ft_search_color(m->pt[i][j].z, m);
		end_color = ft_search_color(m->pt[i][j + 1].z, m);
		if (m->pt[i][j].cpt == 0)
		{
			m->pt[i][j].cpt = 1;
			ret = dep_color;
		}
		else
		{	
			ret = ft_init_var(dep_color, end_color, 
			&(m->pt[i][j]), &(m->pt[i][j + 1]));
			printf(RED"ret = %d\n"DEFAULT_COLOR, ret);
			if (ret == 0)
				ret = dep_color;
			printf("ret = %d\n", ret);
		}
	}
	else 
	{
		dep_color = ft_search_color(m->pt[i][j].z, m);
		ret = dep_color;
	}
	return (ret);
}
