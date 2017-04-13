/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newgnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 04:49:00 by nvarela           #+#    #+#             */
/*   Updated: 2017/03/04 02:13:39 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_newfd	*search_from_lst(t_newfd **alst, int fd)
{
	t_newfd		*tmplst;

	tmplst = *alst;
	if (tmplst)
	{
		while (tmplst)
		{
			if (fd == tmplst->fdi)
				return (tmplst);
			tmplst = tmplst->next;
		}
	}
	if (!(tmplst = (t_newfd *)ft_memalloc(sizeof(t_newfd))))
		return (NULL);
	tmplst->fdi = fd;
	tmplst->next = *alst;
	*alst = tmplst;
	return (tmplst);
}

static char		*join_and_free(char *stock, char *buff, size_t read_fd)
{
	char *tmp;

	if (!stock)
	{
		stock = ft_strndup(buff, read_fd);
		return (stock);
	}
	tmp = stock;
	if (!(stock = ft_strnjoin(stock, buff, read_fd)))
		return (NULL);
	ft_memdel((void **)&tmp);
	return (stock);
}

static char		*fresh_stock(char *stock, int i)
{
	char *tmp;

	tmp = stock;
	stock = ft_strdup(stock + (i + 1));
	ft_memdel((void **)&tmp);
	return (stock);
}

static char		*work_from_stock(char *stock, char **line)
{
	int i;

	i = 0;
	if (ft_strchr(stock, '\n') != NULL)
	{
		i = 0;
		while (stock[i] != '\n')
			i++;
		*line = ft_strndup(stock, i);
		stock = fresh_stock(stock, i);
	}
	else
	{
		*line = ft_strdup(stock);
		ft_bzero(stock, (ft_strlen(stock)));
	}
	return (stock);
}

int				get_next_line(const int fd, char **line)
{
	static t_newfd	*alst = NULL;
	t_newfd			*clst;
	char			buff[BUFF_SIZE + 1];
	int				read_fd;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	clst = search_from_lst(&alst, fd);
	while ((read_fd = read(fd, buff, BUFF_SIZE)) > 0 &&
			(ft_strchr(buff, '\n')) == NULL)
		clst->stock = join_and_free(clst->stock, buff, read_fd);
	if (read_fd < 0)
		return (-1);
	if (read_fd > 0 && (ft_strchr(buff, '\n')) != NULL)
	{
		clst->stock = join_and_free(clst->stock, buff, read_fd);
		clst->stock = work_from_stock(clst->stock, line);
	}
	if (read_fd == 0 && (ft_strlen(clst->stock)) == 0)
		return (0);
	if (read_fd == 0 && (ft_strlen(clst->stock)) != 0)
	{
		clst->stock = work_from_stock(clst->stock, line);
	}
	return (1);
}
