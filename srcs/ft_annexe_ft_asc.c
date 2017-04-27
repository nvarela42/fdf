/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_annexe_ft_asc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 23:36:22 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/27 07:18:27 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_color_twelve(int color, int cp, int base)
{
	int		ret;
	int		dif;
	ret = 0;
	if (color == COLOR_ONE)
	{
		dif = base / 6;
		ft_twelve_one(color, cp, dif);
	}
	if (color == COLOR_TWO)
	{
		dif = base / 3;
		ft_twelve_two(color, cp, dif);
	}
	if (color == COLOR_THREE)
	{
		dif = base / 9;
		ft_twelve_three(color, cp, dif);
	}
	if (color == COLOR_FOUR)
	{
		dif = base / 12;
		ft_twelve_four(color, cp, dif);
	}
	return (ret);
}
