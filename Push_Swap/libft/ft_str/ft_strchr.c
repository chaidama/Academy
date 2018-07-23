/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:53:14 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:53:16 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*str;

	a = (char)c;
	str = (char*)s;
	while (*str)
	{
		if (*str == a)
			return (str);
		str++;
	}
	if (*str == a)
		return (str);
	return (NULL);
}
