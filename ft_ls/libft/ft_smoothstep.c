/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smoothstep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:32:25 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:32:26 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_smoothstep(double edge1, double edge2, double x)
{
	x = ft_clamp((x - edge1) / (edge2 - edge1), 0.0, 1.0);
	return (x * x * (3 - 2 * x));
}
