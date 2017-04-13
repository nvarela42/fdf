/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_processing.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 13:26:17 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/07 03:20:06 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int			ft_check_color(char *str)
{
	int				i;
	int				def_color;

	i = 2;
	def_color = 0x0FFFFFF;
	if (ft_ishexa(str) == 0)
	{
		ft_error(2, str);
		return (def_color);
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (ft_atoi_base(str, "0123456789ABCDEF"));
}

static int			ft_check_point(char *splitcomma)
{
	int				i;

	i = 0;
	while (splitcomma[i] != '\0')
	{
		if (splitcomma[i] < '0' || splitcomma[i] > '9')
		{
			if (splitcomma[i] != '-')
				return (-1);
		}
		i++;
	}
	return (0);
}

static int			ft_init_ptstruct(t_map *map)
{
	int				i;

	i = 0;
	if (!(map->pt = (t_point **)malloc(sizeof(t_point *) * map->s_map)))
		return (-1);
	while (i < map->s_map)
	{
		map->pt[i] = NULL;
		i++;
	}
	return (0);
}

static t_point		*ft_fill_tab_struct(char **splitspace, int j, int size)
{
	int				i;
	t_point			*tabpt;
	char			**splitcomma;

	if (!((tabpt = (t_point *)malloc(sizeof(t_point) * size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (!(splitcomma = ft_strsplit(splitspace[i], ',')))
			return (NULL);
		if (ft_check_point(splitcomma[0]) == -1)
			return (NULL);
		tabpt[i].x = i * 100 + 5;
		tabpt[i].y = j * 100 + 5;
		tabpt[i].z = ft_atoi(splitcomma[0]);
		if (splitcomma[1] == NULL)
			tabpt[i].color = 0x0FFFFFF;
		else
			tabpt[i].color = ft_check_color(splitcomma[1]);
		free_double_chartab(splitcomma);
		i++;
	}
	return (tabpt);
}

int					ft_data_processing(t_map *map)
{
	int				i;
	char			**splitspace;
	t_point			*tmp_pt;
	int				checksize;

	if ((ft_init_ptstruct(map)) == -1)
		return (-1);
	i = 0;
	while (map->recupline[i] != NULL)
	{
		if (!(splitspace = ft_strsplit(map->recupline[i], ' ')))
			return (-1);
		map->sline = ft_count_tab(splitspace);
		if (i != 0 && map->sline != checksize)
			return (-1);
		checksize = map->sline;
		if (!(tmp_pt = ft_fill_tab_struct(splitspace, i, map->sline)))
			return (-1);
		map->pt[i] = tmp_pt;
		free_double_chartab(splitspace);
		i++;
	}
	return (0);
}
