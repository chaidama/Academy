/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:27:55 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/19 14:14:19 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		x;

	i = -1;
	x = 0;
	while (n > 0 && x == 0 && ++i < n)
		if (dst[i] == '\0')
			x = 1;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (x == 0)
		return (n + k);
	else
	{
		i = -1;
		while (src[++i] != '\0' && i < n - j - 1)
			dst[j + i] = src[i];
		dst[j + i] = '\0';
	}
	return (j + k);
}
