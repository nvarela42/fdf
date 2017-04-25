/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 03:34:48 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/21 13:41:37 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_isnot_sup(t_point *pt)
{
	int			i;

	pt->cumul = pt->ydep / 2;
	i = 1;
	while (i <= pt->ydep)
	{
		pt->y += pt->yplus;
		pt->cumul += pt->xdep;
		if (pt->cumul >= pt->ydep)
		{
			pt->cumul -= pt->ydep;
			pt->x += pt->xplus;
		}
		if (ft_static()->color_version == 1)
			ft_putpix_image_color(pt);
		if(ft_static()->color_version == 0)
			ft_putpix_image(pt);
		i++;
	}
}

static void		ft_dx_is_sup(t_point *pt)
{
	int			i;

	pt->cumul = pt->xdep / 2;
	i = 1;
	while (i <= pt->xdep)
	{
		pt->x += pt->xplus;
		pt->cumul += pt->ydep;
		if (pt->cumul >= pt->xdep)
		{
			pt->cumul -= pt->xdep;
			pt->y += pt->yplus;
		}
		if (ft_static()->color_version == 1)
			ft_putpix_image_color(pt);
		if (ft_static()->color_version == 0)
			ft_putpix_image(pt);
		i++;
	}
}

void			ft_drawline(t_point *pt)
{

	pt->xdep = abs(pt->xdep);
	pt->ydep = abs(pt->ydep);
	ft_putpix_image(pt);
	if (pt->xdep > pt->ydep)
		ft_dx_is_sup(pt);
	else
		ft_isnot_sup(pt);
}
