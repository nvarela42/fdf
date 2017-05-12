/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_desc_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:08:44 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 16:48:08 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int				ft_desc_two_three(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 3)
		ret = COLOR_TWO;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 10206051;
	if (cp >= lz / 2 && cp < lz)
		ret = 102080051;
	if (cp == lz)
		ret = COLOR_THREE;
		cp += lz / 3;
	return (ret);
}
static int				ft_desc_two_four(int cp, int lz)
{
	int ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 6)
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
	if (cp >= lz)
		ret = COLOR_FOUR;
	cp += lz / 6;
	return (ret);
}

int						ft_desc_two(int dif, int cp, int lz)
{
	int					ret;

	ret = 0;
	if (dif == 1)
		ret = ft_desc_two_three(cp,lz);
	else if (dif == 2)
		ret = ft_desc_two_four(cp, lz);
	return (ret);
}
