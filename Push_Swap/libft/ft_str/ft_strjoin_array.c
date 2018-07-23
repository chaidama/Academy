/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:55:55 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:55:56 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_array_length(char **array, size_t delimiter)
{
	size_t	total;
	int		i;

	total = 0;
	i = 0;
	while (array[i])
	{
		total += ft_strlen(array[i]);
		total += delimiter;
	}
	return (total);
}

char			*ft_strjoin_array(char **array, char *delimiter)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_strnew(get_array_length(array, ft_strlen(delimiter)));
	while (array[i])
	{
		ft_strcat(new, array[i]);
		if (array[i + 1])
			ft_strcat(new, delimiter);
		i++;
	}
	return (new);
}
