/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asc_four.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:19:21 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 16:49:33 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "fdf.h"

static int				ft_asc_four_three(int cp, int lz)
{
	int		ret;
	ret = 0;
	if (cp >= 0 && cp < lz / 3 )
		ret = COLOR_FOUR;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 102102085;
	if (cp >= lz / 2 && cp < lz)
		ret = 102102065;
	if (cp == lz)
		ret = COLOR_THREE;
	cp += lz / 3;
	return (ret);
}
static int				ft_asc_four_two(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 6 )
		ret = COLOR_FOUR;
	if (cp >= lz / 6 && cp < lz / 5)
		ret = 102102085;
	if (cp >= lz / 5 && cp < lz / 4)
		ret = 102102065;
	if (cp >= lz / 4 && cp < lz / 3)
		ret = COLOR_THREE;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 102080051;
	if (cp >= lz / 2 && cp < lz)
		ret = 102060051;
	if (cp == lz)
		ret = COLOR_TWO;
	cp += lz / 6;
	return (ret);
}
static int				ft_asc_four_one(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 9 )
		ret = COLOR_FOUR;
	if (cp >= lz / 9 && cp < lz / 8)
		ret = 102102085;
	if (cp >= lz / 8 && cp < lz / 7)
		ret = 102102065;
	if (cp >= lz / 7 && cp < lz / 6)
		ret = COLOR_THREE;
	if (cp >= lz / 6 && cp < lz / 5)
		ret = 102080051;
	if (cp >= lz / 5 && cp < lz / 4)
		ret = 102060051;
	if (cp >= lz / 4 && cp < lz / 3 )
		ret = COLOR_TWO;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 200000051;
	if (cp >= lz / 2 && cp < lz)
		ret = 153000051;
	if (cp == lz)
		ret = COLOR_ONE;
	cp += lz / 9;
	return (ret);
}

int						ft_asc_four(int dif, int cp, int lz)
{
	int			ret;

	ret = 0;
	if (dif == 1)
		ret = ft_asc_four_three(cp,lz);
	else if (dif == 2)
		ret = ft_asc_four_two(cp, lz);
	else if (dif == 3)
		ret = ft_asc_four_one(cp, lz);
	return (ret);
}
