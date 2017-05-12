/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_desc_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 11:50:40 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 18:27:34 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int				ft_desc_one_two(int cp, int lz)
{
	int		ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 3 )
		ret = COLOR_ONE;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 153000051;
	if (cp >= lz / 2 && cp < lz)
		ret = 200000051;
	if (cp == lz)
		ret = COLOR_TWO;
	return (ret);
}
static int				ft_desc_one_three(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 6 )
		ret = COLOR_ONE;
	if (cp >= lz / 6 && cp < lz / 5)
		ret = 153000051;
	if (cp >= lz / 5 && cp < lz / 4)
		ret = 200000051;
	if (cp >= lz / 4 && cp < lz / 3)
		ret = COLOR_TWO;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 10206051;
	if (cp >= lz / 2 && cp < lz)
		ret = 102080051;
	if (cp == lz)
		ret = COLOR_THREE;
	return (ret);
}

static int				ft_desc_one_four(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 9 )
		ret = COLOR_ONE;
	if (cp >= lz / 9 && cp < lz / 8)
		ret = 153000051;
	if (cp >= lz / 8 && cp < lz / 7)
		ret = 200000051;
	if (cp >= lz / 7 && cp < lz / 6)
		ret = COLOR_TWO;
	if (cp >= lz / 6 && cp < lz / 5)
		ret = 10206051;
	if (cp >= lz / 5 && cp < lz / 4)
		ret = 102080051;
	if (cp >= lz / 4 && cp < lz / 3 )
		ret = COLOR_THREE;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 10210265;
	if (cp >= lz / 2 && cp < lz)
		ret = 10210285;
	if (cp == lz)
		ret = COLOR_FOUR;
	return (ret);
}

int						ft_desc_one(int dif, t_map *m, int i, int j)
{
	int			ret;
	int 		lz;

	lz = 0;
	if (m->pt[i][j +1].z < 0)
		lz = lz * -1;
	else
		lz = m->pt[i][j + 1].z;
	printf("lz = %d\n", lz);
	ret = 0;
	if (dif == 1)
	{
		ret = ft_desc_one_two(m->pt[i][j].cpt, m->pt[i][j + 1].z);
		m->pt[i][j].cpt += lz / 3;
	}

	else if (dif == 2)
	{
		ret = ft_desc_one_three(m->pt[i][j].cpt, m->pt[i][j + 1].z);
		m->pt[i][j].cpt += lz / 6;
	}
	else if (dif == 3)
	{
		ret = ft_desc_one_four(m->pt[i][j].cpt, m->pt[i][j + 1].z);
			m->pt[i][j].cpt += lz / 9;
	}
	return (ret);
}
