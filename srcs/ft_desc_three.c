/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_desc_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:40:35 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/05 15:48:52 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
static int						ft_desc_three_four(int cp, int lz)
{
	int					ret;

	ret = 0;
	if (cp >= 0 && cp < lz / 3 )
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

int						ft_desc_three(int dif, int cp, int lz)
{
	int					ret;

	ret = 0;
	if (dif == 1)
		ret = ft_desc_three_four(cp,lz);
	return (ret);
}
