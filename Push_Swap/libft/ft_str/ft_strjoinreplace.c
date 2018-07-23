/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinreplace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:56:07 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:56:08 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinreplace(char const *s1, char const *s2)
{
	char		*s;
	size_t		n;

	n = (size_t)(ft_strlen(s1) + ft_strlen(s2));
	s = ft_strnew(n);
	if (!s)
		return (s);
	ft_strcpy(s, s1);
	ft_strcat(s, s2);
	ft_memdel((void**)&s1);
	return (s);
}
