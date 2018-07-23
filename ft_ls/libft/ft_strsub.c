/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:39:27 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:39:29 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*news;
	size_t	i;

	i = -1;
	news = malloc(sizeof(char) * len);
	if (!news || !len || !s)
		return (NULL);
	while (++i < len)
		*(news + i) = *(s + start + i);
	return (news);
}
