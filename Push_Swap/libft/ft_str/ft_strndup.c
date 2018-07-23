/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:57:46 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:57:47 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s;
	size_t	i;

	s = ft_strnew(n);
	if (!s)
		return (NULL);
	if (s1)
	{
		i = 0;
		while (i < n)
		{
			s[i] = s1[i];
			i++;
		}
	}
	return (s);
}
