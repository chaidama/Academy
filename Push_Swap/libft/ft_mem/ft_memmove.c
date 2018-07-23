/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:30:34 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:30:35 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*m;
	unsigned char	*old;

	m = (unsigned char*)dst;
	old = (unsigned char*)src;
	if (src > dst)
	{
		while (len-- > 0)
			*m++ = *old++;
	}
	else
	{
		m += len;
		old += len;
		while (len-- > 0)
			*--m = *--old;
	}
	return (dst);
}
