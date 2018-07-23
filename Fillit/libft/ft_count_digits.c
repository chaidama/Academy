/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:29:34 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:29:42 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_digits(long n, size_t base)
{
	size_t	digit_count;

	digit_count = 0;
	if (n < 0)
		++digit_count;
	while (n)
	{
		++digit_count;
		n /= (long)base;
	}
	if (!digit_count)
		return (1);
	return (digit_count);
}
