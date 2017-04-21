/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:23:45 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/21 18:07:49 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	if (ft_start_prog(argc, argv) == -1)
		return (0);
	ft_search_coord(ft_static());
	ft_search_size_for_win(ft_static());
	if (ft_start_for_draw(ft_static()) == -1)
		return (0);
	return (0);
}
