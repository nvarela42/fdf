/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_rgb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 15:34:49 by nvarela           #+#    #+#             */
/*   Updated: 2017/04/26 18:34:05 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int					*ft_zero_to_midmax(void)
{
	int				r;
	int				g;
	int				b;
	
	r = 153; 
	g = 102;
	b = 255;
	return (ft_gardient_color(r, g, b));
}

int					*ft_midmax_to_max(void)
{
	int				r;
	int				g;
	int				b;
	
	r = 153;
	g = 102;
	b = 102;
	return (ft_gardient_color(r, g, b));
}

int					*ft_zero_to_midmin(void)
{
	int				r;
	int				g;
	int				b;
	
	r = 102;
	g = 102;
	b = 205;
	return (ft_concat(r, g, b));
}

int					*ft_midmin_to_min(void)
{
	int				r;
	int				g;
	int				b;
	
	r = 102;
	g = 102;
	b = 102;
	return (ft_gardient_color(r, g, b));
}
