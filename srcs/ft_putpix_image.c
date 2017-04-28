/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpix_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:07:43 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/28 17:21:06 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fdf.h"

/*
** check if the format color do not exceed 255 or is not below 0 and if is
** is is not a good format, replace whith good format and groups all channel
** in one int;
** calcule la valeur a assigner pour chaque canaux en fonction de la taille de z 
** "verifie si le format de la couleur n'excede pas 255 ou n'est pas
** en dessous de zero, si ca n'est pas le bon format, remplace les 
**  valeur avec le bon format et regroupe ensuite les 3 canaux en un int grace
** a un decalage binaire"
*/
/*
static int		ft_check_color(int r, int g, int b)
{
	int ret;

	ret = 0;
	g = g > 255 ? 255 : g;
	g = g < 0 ? 0 : g;
	r = r > 255 ? 255 : r;
	r = r < 0 ? 0 : r;
	b = b > 255 ? 255 : b;
	b = b < 0 ? 0 : b;
	ret = r << 24;
	ret = ret | g << 16;
	ret = ret | b << 8;
	return (ret);
}*/
/*
** calculates the value to be assigned for each channel r, g and b depending
** to the z size
** "calcule la valeur a assigner pour chaque canaux r, g et b, en fonction
** de de la taille de z"
*/
/*
static char      *ft_search_color(int z, t_map *m)
{
	char		*rgb;

	rgb = 0;
	if (z >= 0 && z < m->max_z / 2)
		rgb = "0x0660066";
	else if (z >= m->max_z / 2)
		rgb = "0x0660000";
	else if (z < 0 && z > m->min_z / 2)
		rgb = "0x0660099";
	else if (z <= m->min_z / 2)
		rgb = "0x06600FF";
	return (rgb);
}*/
void			ft_putpix_image_color(t_point *pt, t_map *map, int i, int j)
{
	int			y;
	int			color;
	int			ret_col; 
	
	color = ft_color(map, i, j);
	y = pt->x * 4 + pt->y * ft_static()->size_line;
	ret_col = mlx_get_color_value(ft_static()->mlx, color);
	ft_static()->imgdata[y] = (ret_col & 0xFF);
	ft_static()->imgdata[y + 1] = (ret_col & 0xFF00) >> 8;
	ft_static()->imgdata[y + 2] = (ret_col & 0xFF0000) >> 16;
}

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
