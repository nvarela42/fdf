/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpix_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:07:43 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/15 11:02:01 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_putpix_image(t_point *pt)
{
	int			i;
	int			color;

	color = mlx_get_color_value(ft_static()->mlx, pt->color);
	i = pt->x * 4 + pt->y * ft_static()->size_line;
	ft_static()->imgdata[i] = (color & 0xFF);
	ft_static()->imgdata[i + 1] = (color & 0xFF00) >> 8;
	ft_static()->imgdata[i + 2] = (color & 0xFF0000) >> 16;
}
