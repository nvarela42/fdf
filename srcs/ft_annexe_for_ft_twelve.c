/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_annexe_for_ft_twelve.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 00:53:35 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/27 08:22:46 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_twelve_one(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 5 * dif && cp > 4 * dif)
		ret = color - 1 ;
	if (cp <= 4 * dif && cp > 3 * dif)
		ret = color - 52;
	if (cp <= 3 * dif && cp > 2 * dif)
		ret = color - 103;
	if (cp <= 2 * dif && cp > dif)
		ret = color - 154;
	if (cp <= dif && cp > 0)
		ret = color - 205;
	return (ret);
}

int				ft_twelve_two(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 2 * dif && cp > dif * dif)
		ret = color - 51;
	if (cp <= dif && cp > 0)
		ret = color - 102;
	return (ret);
}


int				ft_twelve_three(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 8  * dif && cp > 7 * dif)
		ret = color + 51;
	if (cp <= 7 * dif && cp > 6 * dif)
		ret = color + 51;
	if (cp <= 6 * dif && cp > 5 * dif)
		ret = color + 51000052;
	if (cp <= 5 * dif && cp > 6 * dif)
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

int				ft_twelve_four(int color, int cp, int dif)
{
	int     ret;

	ret = 0;
	if (cp <= 11 * dif && cp > 10 * dif)
		ret = color + 51;
	if (cp <= 10 * dif && cp > 9 * dif)
		ret = color + 102;
	if (cp <= 9 * dif && cp > 8 * dif)
		ret = color + 153;
	if (cp <= 8 * dif && cp > 7 * dif)
		ret = color + 204;
	if (cp <= 7 * dif && cp > 6 * dif)
		ret = color + 255;
	if (cp <= 6 * dif && cp > 5 * dif)
		ret = color + 51000205;
	if (cp <= 5 * dif && cp > 6 * dif)
		ret = color + 51000204; 
	if (cp <= 4 * dif && cp > 3 * dif)
		ret = color + 51000153; 
	if (cp <= 3 * dif && cp > 2 * dif)
		ret = color + 51000102; 
	if (cp <= 2 * dif && cp > dif)
		ret = color + 51000051; 
	if (cp <= dif && cp > 0)
		ret = color + 51000000;
	printf(YELLOW"OK\n");
	return (ret);
}

