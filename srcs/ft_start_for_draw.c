/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_for_draw.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 03:43:42 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/18 19:11:03 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
**calculate for draw to the vertical point
**"calcule pour relier les points verticaux"
*/

static void		ft_vertipt(t_point *vpt, t_map *map, int i, int j)
{
	vpt->x = vpt->xi;
	vpt->y = vpt->yi;
	if (i != (map->s_map - 1))
	{
		vpt->xend = map->pt[i + 1][j].xi;
		vpt->yend = map->pt[i + 1][j].yi;
	}
	else
	{
		vpt->xend = vpt->xi;
		vpt->yend = vpt->yi;
	}
	vpt->xdep = vpt->xend - vpt->xi;
	vpt->ydep = vpt->yend - vpt->yi;
	vpt->xplus = (vpt->xdep > 0) ? 1 : -1;
	vpt->yplus = (vpt->ydep > 0) ? 1 : -1;
}

/*
**calculate for draw the horizontal point
**"calcule pour relier les pout horizontaux"
*/

static void		ft_hoript(t_point *hpt, t_map *map, int i, int j)
{
	hpt->x = hpt->xi;
	hpt->y = hpt->yi;
	if (j != (map->sline - 1))
	{
		hpt->xend = map->pt[i][j + 1].xi;
		hpt->yend = map->pt[i][j + 1].yi;
	}
	else
	{
		hpt->xend = hpt->xi;
		hpt->yend = hpt->yi;
	}
	hpt->xdep = hpt->xend - hpt->xi;
	hpt->ydep = hpt->yend - hpt->yi;
	hpt->xplus = (hpt->xdep > 0) ? 1 : -1;
	hpt->yplus = (hpt->ydep > 0) ? 1 : -1;
}

int				ft_start_for_draw(t_map *map)
{
	int			i;
	int			j;
	t_point		*hoript;
	t_point		*vertipt;

	i = -1;
	while (++i < map->s_map)
	{
		j = -1;
		while (++j < map->sline)
		{

			hoript = &map->pt[i][j];
			vertipt = &map->pt[i][j];
			ft_hoript(hoript, map, i, j);
			ft_drawline(hoript);
			vertipt = &map->pt[i][j];
			ft_vertipt(vertipt, map, i, j);
			ft_drawline(vertipt);
		}
	}
	mlx_put_image_to_window(map->mlx, map->win, map->image,
	map->xpos, map->ypos);
	ft_putendl("ic");

	mlx_hook(map->win, 2, 3, ft_hook, &map);
	mlx_key_hook(map->win, ft_manage_events, map);
	mlx_loop(map->mlx);
	return (0);
}
