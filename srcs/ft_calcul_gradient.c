/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul_gradient.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 12:52:32 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/28 17:20:04 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_color_gradient(int color, int cp, int base)
{
	int		ret;
	int		dif;

	ret = 0;
	if (color == COLOR_ONE && cp != 0)
	{
		dif = base / 3;
		ret = ft_gradient_one(color, cp, dif);
	}
	if (color == COLOR_TWO && cp != 0)
	{
		dif = base / 6;
		ret = ft_gradient_two(color, cp, dif);
	}
	if (color == COLOR_THREE && cp != 0)
	{
		dif = base / 9;
		ret = ft_gradient_three(color, cp, dif && cp != 0);
	}
	if (color == COLOR_FOUR && cp != 0)
	{
		dif = base / 12;
		ret = ft_gradient_four(color, cp, dif);
	}
	return (ret);
}
