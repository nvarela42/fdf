/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 21:47:34 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/28 17:20:00 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
int			ft_div(int calc, int div)
{
	int		ret;

	ret = 0;
	if (calc == 1)
		ret = div / 3;
	if (calc == 2)
		ret = div / 6;
	if (calc == 3)
		ret = div / 9;
	if (calc == 4)
		ret = div / 12;
	return (ret);
}

int			ft_trans(int color)
{
	int		ret;

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

