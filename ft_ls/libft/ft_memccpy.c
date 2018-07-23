/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:28:02 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:28:04 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (dst && src && c && n)
	{
		while (i < n)
		{
			*((char *)dst + i) = *((char *)src + i);
			if (*((char *)src + i) == (char)c)
			{
				return ((char *)dst + i + 1);
			}
			i++;
		}
	}
	return (NULL);
}
