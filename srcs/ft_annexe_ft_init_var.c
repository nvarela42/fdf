/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_annexe_ft_init_var.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 21:47:34 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/04 15:01:11 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
int			ft_div(int calc, int diviser)
{
	int		ret;

	ret = 0;
	if (calc == 1)
		ret = diviser / 3;
	if (calc == 2)
		ret = diviser / 6;
	if (calc == 3)
		ret = diviser / 9;
	if (calc == 4)
		ret = diviser / 12;
	printf("div ft_div = %d\n", diviser);
	printf("ret ft_div = %d\n", ret);
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
