/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 14:01:35 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/08 14:01:36 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	locate;

	locate = c;
	ptr = (char*)s;
	while (*ptr)
	{
		if (*ptr == locate)
			return (ptr);
		ptr++;
	}
	if (*ptr == locate)
		return (ptr);
	else
		return (NULL);
}
