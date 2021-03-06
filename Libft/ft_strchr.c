/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:27:39 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/10 18:12:35 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char*)s;
	while (*s != (char)c && *s != '\0')
	{
		s++;
		t++;
	}
	if (*s == (char)c)
		return (t);
	return (NULL);
}
