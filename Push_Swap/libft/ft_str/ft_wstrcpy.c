/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:00:28 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:00:29 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_wset(int *b, int c, size_t len)
{
	int		*m;

	m = b;
	while (len-- > 0)
		*m++ = c;
	return (b);
}

wchar_t		*ft_wstrsub(wchar_t const *s, unsigned int start, size_t len)
{
	wchar_t		*str;

	str = ft_wstrnew(len);
	if (!str)
		return (str);
	ft_memmove(str, s + start, len * 4);
	return (str);
}

wchar_t		*ft_wstrcpy(wchar_t *dst, const wchar_t *src)
{
	int			i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

wchar_t		*ft_wstrcat(wchar_t *s1, const wchar_t *s2)
{
	wchar_t		*s;

	s = s1;
	while (*s)
		s++;
	while (*s2)
		*s++ = *s2++;
	*s = 0;
	return (s1);
}
