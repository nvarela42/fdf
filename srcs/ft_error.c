/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:23:01 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/06 23:08:34 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_wrong_nb_file(void)
{
	ft_putendl(RED"/!\\ Wrong number of file /!\\");
	ft_putendl(RED"Usage: ./fdf <filename>");
}

static void		ft_wrong_file(void)
{
	ft_putendl(RED"wrong file format or value\n");
	ft_putendl(RED" -------------- Usage :--------------\n");
	ft_putendl(" - The file must have the same number of points per line");
	ft_putendl(" - The points must be separated by spaces");
	ft_putendl(" - Colors must be separated by commas\n");
	ft_putendl("exemple of valid file :\n");
	ft_putendl("0 0 0 0 0\n" "0 0 0 0 0\n" "0 0 0 0 0\n");
	ft_putendl("  or :\n");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF\n");
	ft_putendl("  or :\n");
	ft_putendl("0,0x0FFFFFF 0 0,0x0FFFFFF 0,0x0FFFFFF");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0 0");
	ft_putendl("0 0 0 0,0x0FFFFFF");
	ft_putendl("0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF 0,0x0FFFFFF\n");
}

static void		ft_wrong_color(char *str)
{
	ft_putstr(YELLOW"the point's color \"");
	ft_putstr(RED);
	ft_putstr(str);
	ft_putstr(YELLOW);
	ft_putstr("\" is not valid, it is replaced by the default color ");
	ft_putendl(GREEN "\"0x0FFFFFF\"");
	ft_putstr(DEFAULT_COLOR);
}

void			ft_error(int n, char *str)
{
	if (n == 0)
		ft_wrong_nb_file();
	if (n == 1)
		ft_wrong_file();
	if (n == 2)
		ft_wrong_color(str);
}
