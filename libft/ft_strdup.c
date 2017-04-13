/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:28:01 by nvarela           #+#    #+#             */
/*   Updated: 2016/11/22 17:28:30 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dup;
	int		lenght;

	lenght = ft_strlen(str);
	dup = (char*)malloc(sizeof(char) * (lenght + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
