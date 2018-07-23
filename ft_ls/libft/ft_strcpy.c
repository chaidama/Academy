/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:33:52 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:33:53 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(src);
	index = -1;
	while (++index <= length && src[index] != '\0')
		*(dst + index) = *(src + index)
				;
	dst[index] = '\0';
	return (dst);
}
