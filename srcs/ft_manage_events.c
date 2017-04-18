/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_events.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 16:41:13 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/18 18:47:48 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_hook(t_map *map)
{
	(void)map;
	exit(EXIT_SUCCESS);
	return (0);
}

int				ft_manage_events(int keycode, void *param)
{
	t_map		*event;

	event = (t_map *)param;
	if (keycode == ESCAPEKEY)
		exit(EXIT_SUCCESS);
	else if (keycode == UPKEY)
		ft_upkey(event);
	else if (keycode == DOWNKEY)
		ft_downkey(event);
	else if (keycode == LEFTKEY)
		ft_leftkey(event);
	else if (keycode == RIGHTKEY)
		ft_rightkey(event);
	else if (keycode == ZKEY)
		ft_zkey(event);
	else if (keycode == XKEY)
		ft_xkey(event);
	return(0);
}
