/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:29:20 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:36:12 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;
	void	*tmp;

	m = (void *)malloc(size);
	if (!m)
		return (NULL);
	tmp = m;
	while (size-- > 0)
		*(unsigned char*)tmp++ = 0;
	return (m);
}
