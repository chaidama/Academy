/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:35:03 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:35:05 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		str = ft_memalloc((i + j) * sizeof(str));
		j = 0;
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	return (0);
}
