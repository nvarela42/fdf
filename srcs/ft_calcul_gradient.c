/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul_gradient.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 12:52:32 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/04 16:48:41 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_color_gradient(int color, int cp, int dif)
{
	int		ret;

	ret = 0;
	if (color == COLOR_ONE && cp != 0)
		ret = ft_gradient_one(color, cp, dif);
	if (color == COLOR_TWO && cp != 0)
		ret = ft_gradient_two(color, cp, dif);
	if (color == COLOR_THREE && cp != 0)
		ret = ft_gradient_three(color, cp, dif && cp != 0);
	if (color == COLOR_FOUR && cp != 0)
		ret = ft_gradient_four(color, cp, dif);
	return (ret);
}

int			ft_color_gradient_twelve(int color, int cp, int dif)
{
	int		ret;

	ret = 0;
	if (color == COLOR_ONE && cp != 0)
		ret = ft_gradient_one_twelve(color, cp, dif);
	if (color == COLOR_TWO && cp != 0)
		ret = ft_gradient_two_twelve(color, cp, dif);
	if (color == COLOR_THREE && cp != 0)
		ret = ft_gradient_three_twelve(color, cp, dif && cp != 0);
	if (color == COLOR_FOUR && cp != 0)
		ret = ft_gradient_four_twelve(color, cp, dif);
	return (ret);
}
