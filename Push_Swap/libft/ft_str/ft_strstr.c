/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:59:29 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:59:31 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t size;

	if (*s2 == '\0')
		return ((char *)s1);
	size = ft_strlen(s2);
	while (*s1)
	{
		if (ft_strncmp(s1, s2, size) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
