/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:17:00 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:17:01 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char chr;
	unsigned char *str;

	chr = c & 0xff;
	str = (unsigned char *)b;
	while (len--)
		*str++ = chr;
	return (b);
}
