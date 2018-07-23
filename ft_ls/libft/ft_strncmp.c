/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:36:16 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:36:19 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	nb;

	nb = 0;
	if (!n)
		return (0);
	while (nb < (n - 1) && *s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
		nb++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
