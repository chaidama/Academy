/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:02:10 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/14 14:49:39 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*p;

	if ((p = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	i = '\0';
	while (i <= size)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
