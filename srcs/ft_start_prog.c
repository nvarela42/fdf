/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_prog.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:21:12 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/07 00:20:31 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_start_prog(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putendl("1");
		ft_error(1, NULL);
		return (-1);
	}
	if (ft_static() == NULL)
	{
		ft_putendl("2");
		ft_error(1, NULL);
		return (-1);
	}
	if (ft_read_fd(argv[1], ft_static()) == -1)
	{
		ft_putendl("3");
		ft_error(1, NULL);
		return (-1);
	}
	if (ft_data_processing(ft_static()) == -1)
	{
		ft_putendl("4");
		ft_error(1, NULL);
		return (-1);
	}
	return (0);
}
