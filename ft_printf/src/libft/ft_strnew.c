/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:08:09 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:08:11 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	char *start;

	if ((str = (char *)malloc(sizeof(char) * size + 1)) == 0)
		return (0);
	start = str;
	while (size--)
		*str++ = '\0';
	*str = '\0';
	return (start);
}
