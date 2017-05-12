/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asc_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:08:44 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 16:35:17 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int				ft_asc_three_two(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 3)
		ret = COLOR_THREE;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 102080051;
	if (cp >= lz / 2 && cp < lz)
		ret = 102060051;
	if (cp == lz)
		ret = COLOR_TWO;
		cp += lz / 3;
	return (ret);
}
static int				ft_asc_three_one(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 6)
		ret = COLOR_THREE;
	if (cp >= lz / 6 && cp < lz / 5)
		ret = 10208051;
	if (cp >= lz / 5 && cp < lz / 4)
		ret = 102060051;
	if (cp >= lz / 4 && cp < lz / 3 )
		ret = COLOR_TWO;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 200000051;
	if (cp >= lz / 2 && cp < lz)
		ret = 153000051;
	if (cp >= lz)
		ret = COLOR_ONE;
	cp += lz / 6;
	return (ret);
}

int						ft_asc_three(int dif, int cp, int lz)
{
	int					ret;

	ret = 0;
	if (dif == 1)
		ret = ft_asc_three_two(cp,lz);
	else if (dif == 2)
		ret = ft_asc_three_one(cp, lz);
	return (ret);
}
