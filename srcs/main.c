/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:23:45 by nvarela           #+#    #+#             */
/*   Updated: 2017/05/11 15:23:21 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	if (ft_start_prog(argc, argv) == -1)
		return (0);
	// printf ("x =%d\n", ft_static()->pt[0]->xi);
	// printf ("y =%d\n", ft_static()->pt[0]->yi);
//	printf("start pro OK\n");
	ft_search_coord(ft_static());
	//printf("search coord OK\n");
	ft_search_size_for_win(ft_static());
	// printf("win size OK\n");
	printf ("x1 =%d\n", ft_static()->pt[0]->xi);
	printf ("y1 =%d\n", ft_static()->pt[0]->yi);
	printf ("x2 =%d\n", ft_static()->pt[1]->xi);
	printf ("y2 =%d\n", ft_static()->pt[1]->yi);
	if (ft_start_for_draw(ft_static()) == -1)
		return (0);
	// printf("start for draw OK\n");

	ft_free_fdf(ft_static());
	// printf("free OK\n");

	return (0);
}
