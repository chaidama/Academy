/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 14:02:16 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/08 14:02:17 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*new_s;

	new_s = (char *)malloc(sizeof(char) * size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_s[i] = '\0';
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
