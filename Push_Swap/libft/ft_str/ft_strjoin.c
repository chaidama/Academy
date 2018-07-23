/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:55:37 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:55:38 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_new;
	size_t	i;

	if (s1 && s2)
	{
		if (!(s_new = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		i = 0;
		while (*s1)
			*(s_new + i++) = *s1++;
		while (*s2)
			*(s_new + i++) = *s2++;
		*(s_new + i) = '\0';
		return (s_new);
	}
	else
		return (NULL);
}
