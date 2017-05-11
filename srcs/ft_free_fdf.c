/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_fdf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 12:08:07 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/11 16:19:04 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_free_the_pix(int s_map, t_point **pt)
{
	int			i;

	i = 0;
	while (i < s_map)
	{
		free(pt[i]);
		i++;
	}
	free(pt);
}

void			ft_free_fdf(t_map *map)
{
	if (map == NULL)
		return ;
	if (map->pt != NULL)
		free_double_chartab(map->recupline);
	if (map->pt != NULL)
		ft_free_the_pix(map->s_map, map->pt);
	if (map)
		free(map);
}
