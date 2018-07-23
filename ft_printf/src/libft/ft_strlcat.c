/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:13:38 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:13:40 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t returnval;

	if (size + ft_strlen(src) > ft_strlen(src) + ft_strlen(dst))
		returnval = ft_strlen(src) + ft_strlen(dst);
	else
		returnval = ft_strlen(src) + size;
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	if (size < 1)
		return (returnval);
	size--;
	while (*src && size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	return (returnval);
}
