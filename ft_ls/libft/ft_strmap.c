/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:35:45 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:35:47 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*nstr;

	i = -1;
	if (s && f)
	{
		j = ft_strlen((char*)s);
		nstr = (char*)malloc(j * sizeof(char));
		while (*(s + ++i) != '\0')
			nstr[i] = f(*(s + i));
		return (nstr);
	}
	return (NULL);
}
