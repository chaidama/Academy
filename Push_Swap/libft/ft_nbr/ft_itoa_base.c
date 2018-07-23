/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:32:56 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:32:58 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(unsigned long n, int b)
{
	int		i;

	i = 0;
	if (!n)
		i = 1;
	while (n)
	{
		n /= b;
		i++;
	}
	return (i);
}

static void		ft_digits(char *a, unsigned long num, int len, unsigned int b)
{
	char	c;

	if (!num)
		a[--len] = 48;
	while (len > 0)
	{
		c = num % b;
		if (c < 10)
			a[--len] = (c + 48);
		else
			a[--len] = (c + 55);
		num /= b;
	}
}

char			*ft_itoa_base(unsigned long n, unsigned int b)
{
	int				len;
	unsigned long	num;
	char			*a;

	if (b <= 1)
		return (NULL);
	num = n;
	len = ft_length(num, b);
	a = ft_strnew(len);
	if (!a)
		return (a);
	ft_digits(a, num, len, b);
	return (a);
}
