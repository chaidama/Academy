/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:30:14 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:30:15 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;

	temp_dst = (char*)dst;
	temp_src = (char*)src;
	while (n-- > 0)
		*temp_dst++ = *temp_src++;
	return (dst);
}
