/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 11:26:52 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/06 23:08:41 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			ft_read_fd(char *file, t_map *map)
{
	int		ret;
	char	*line;
	int		fd;

	ret = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		return (-1);
	while ((ret = get_next_line(fd, &line)) != 0)
	{
		if (ret < 0)
			return (-1);
		map->recupline = ft_realloc(map->recupline, line);
		free(line);
	}
	close(fd);
	map->s_map = ft_count_tab(map->recupline);
	if (map->s_map == 0)
		return (-1);
	return (0);
}
