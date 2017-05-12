/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fradient_twelve.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 12:47:26 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/04 16:38:21 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_gradient_one_twelve(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 2 * dif && cp > 1 * dif)
		ret = color - 51 ;
	if (cp <= dif && cp > 0)
		ret = color - 102;
	return (ret);
}

int				ft_gradient_two_twelve(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 5 * dif && cp > 4 * dif)
		ret = color - 1;
	if (cp <= 4 * dif && cp > 3 * dif)
		ret = color - 52;
	if (cp <= 3 * dif && cp > 2 * dif)
		ret = color - 103;
	if (cp <= 2 * dif && cp > 1 * dif)
		ret = color - 154;
	if (cp <= dif && cp > 0)
		ret = color - 205;
	return (ret);
}


int				ft_gradient_three_twelve(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 8 * dif && cp > 7 * dif)
		ret = color + 51;
	if (cp <= 7 * dif && cp > 6 * dif)
		ret = color + 102;
	if (cp <= 6 * dif && cp > 5 * dif)
		ret = color + 51000052;
	if (cp <= 5 * dif && cp > 4 * dif)
		ret = color + 51000051;
	if (cp <= 4 * dif && cp > 3 * dif)
		ret = color + 51000000;
	if (cp <= 3 * dif && cp > 2 * dif)
		ret = color + 50999949;
	if (cp <= 2 * dif && cp > dif)
		ret = color + 50999898;
	if (cp <= dif && cp > 0)
		ret = color + 50999847;
	return (ret);
}

int				ft_gradient_four_twelve(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 11 * dif && cp > 10 * dif)
		ret = color + 51;
	else if (cp <= 10 * dif && cp > 9 * dif)
		ret = color + 102;
	else if (cp <= 9 * dif && cp > 8 * dif)
		ret = color + 153;
	else if (cp <= 8 * dif && cp > 7 * dif)
		ret = color + 204;
	else if (cp <= 7 * dif && cp > 6 * dif)
		ret = color + 255;
	else if (cp <= 6 * dif && cp > 5 * dif)
		ret = color + 51000205;
	else if (cp <= 5 * dif && cp > 4 * dif)
		ret = color + 51000204;
	else if (cp <= 4 * dif && cp > 3 * dif)
		ret = color + 51000153;
	else if (cp <= 3 * dif && cp > 2 * dif)
		ret = color + 51000102;
	else if (cp <= 2 * dif && cp > dif)
		ret = color + 51000051;
	else if (cp <= dif && cp > 0)
		ret = color + 51000000;
	return (ret);
}
