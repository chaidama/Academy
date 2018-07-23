/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:07:37 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/09 22:44:10 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		if ((t = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			t[i] = f(i, s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
