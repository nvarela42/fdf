/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpix_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:07:43 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/11 10:46:38 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_putpix_image(t_point *pt)
{
	int			i;

	i = (((pt->y / 2)-1) * pt->x) + (pt->x / 4);
	ft_static()->imgdata[i] = 0x00;
	ft_static()->imgdata[i + 1] = 0x00;
	ft_static()->imgdata[i + 2] = 0xF0;
}
