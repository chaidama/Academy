/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:31:37 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:31:40 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		i;
	int		a[10];

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (!n)
		ft_putchar('0');
	while (n)
	{
		*(a + i) = n % 10;
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(*(a + i) + 48);
	}
}
