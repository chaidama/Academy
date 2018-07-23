/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:29:01 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:29:02 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c1;
	const char	*c2;

	c2 = src;
	c1 = dst;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	c2 += len;
	c1 += len;
	while (len--)
		*--c1 = *--c2;
	return (dst);
}
