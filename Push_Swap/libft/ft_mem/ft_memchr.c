/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:29:51 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:29:53 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;
	void			*y;

	x = (unsigned char *)src;
	y = (void *)src;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (y + i);
		i++;
	}
	return (NULL);
}
