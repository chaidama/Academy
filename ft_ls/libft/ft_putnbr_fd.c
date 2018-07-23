/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:31:48 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:31:50 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		a[10];

	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (!n)
		ft_putchar_fd('0', fd);
	while (n)
	{
		*(a + i) = n % 10;
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_fd(*(a + i) + 48, fd);
	}
}
