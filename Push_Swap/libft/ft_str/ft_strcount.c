/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:53:48 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:53:49 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcount(char *str, char to_find)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == to_find)
			count++;
		str++;
	}
	return (count);
}
