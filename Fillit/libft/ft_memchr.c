/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:02:43 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/09 20:27:56 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned	char	*x;
	void				*y;

	x = (unsigned char*)s;
	y = (void *)s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (y + i);
		i++;
	}
	return (NULL);
}
