/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asc_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 16:03:21 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 16:50:15 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int				ft_asc_two_one(int cp, int lz)
{
	int		ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 3 )
		ret = COLOR_TWO;
	if (cp >= lz / 3 && cp < lz / 2)
		ret = 200000051;
	if (cp >= lz / 2 && cp < lz)
		ret = 153000051;
	if (cp == lz)
		ret = COLOR_ONE;
	cp += lz / 3;
	return (ret);
}

int						ft_asc_two(int dif, int cp, int lz)
{
	int			ret;

	ret = 0;
	if (dif == 1)
		ret = ft_asc_two_one(cp,lz);
	return (ret);
}
