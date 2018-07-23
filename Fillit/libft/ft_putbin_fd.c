/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:59 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:23 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putbin_fd(unsigned int number, int fd)
{
	int	cnt;

	cnt = 0;
	while (number)
	{
		cnt++;
		ft_putchar_fd((number & 1) + '0', fd);
		number = number >> 1;
	}
	while (cnt < 32)
	{
		ft_putchar_fd('0', fd);
		cnt++;
	}
}
