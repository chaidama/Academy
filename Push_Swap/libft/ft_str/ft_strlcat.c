/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:56:18 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:56:19 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;

	i = 0;
	len_dst = 0;
	if (dst && src && size > 0)
	{
		while (dst[i] && i < size)
			i++;
		len_dst = i;
		while (src[i - len_dst] && i < size - 1)
		{
			dst[i] = src[i - len_dst];
			i++;
		}
		if (i < size)
			dst[i] = 0;
	}
	return (len_dst + ft_strlen(src));
}
