/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_generic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:29:06 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:29:15 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_generic(const char *str, size_t base, const char *format)
{
	int		sign;
	int		val;

	sign = 1;
	val = 0;
	while (ft_isspace(*str))
		++str;
	if (*str == format[0] || *str == format[1])
	{
		if (*str == format[0])
			sign = -1;
		++str;
	}
	while (ft_memchr(&format[2], *str, base) && *str)
	{
		val *= base;
		val += sign * ((char *)ft_memchr(&format[2], *str, base) - &format[2]);
		++str;
	}
	return (val);
}
