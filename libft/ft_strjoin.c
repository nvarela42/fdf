/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:52:21 by nvarela           #+#    #+#             */
/*   Updated: 2016/11/24 16:33:37 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*freshstr;
	size_t	len;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	freshstr = (char *)malloc(sizeof(char) * (len + 1));
	if (freshstr == 0)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		freshstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		freshstr[i++] = s2[j++];
	}
	freshstr[i] = '\0';
	return (freshstr);
}
