/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:02:31 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:02:33 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intsize(int n)
{
	int		size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}
