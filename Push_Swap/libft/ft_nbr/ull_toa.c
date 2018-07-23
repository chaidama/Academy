/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_toa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:34:41 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:34:42 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ull_toa(unsigned long long nb)
{
	int		len;
	char	*s;

	len = ull_len(nb);
	s = ft_strnew(len);
	if (nb == 0)
		*(s + len - 1) = '0';
	while (nb > 0 && len-- > 0)
	{
		*(s + len) = nb % 10 + '0';
		nb = nb / 10;
	}
	return (s);
}
