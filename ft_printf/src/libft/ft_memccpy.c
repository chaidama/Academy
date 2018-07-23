/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:15:16 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:15:19 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*d_str;
	unsigned const char	*s_str;
	unsigned char		chr;

	d_str = (unsigned char *)dst;
	s_str = (unsigned const char *)src;
	chr = (unsigned char)c;
	while (n--)
		if ((*d_str++ = *s_str++) == chr)
			return ((void *)d_str);
	return (NULL);
}
