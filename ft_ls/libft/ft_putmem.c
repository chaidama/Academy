/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:31:19 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:31:26 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmem(void *mem, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		ft_putchar((*(unsigned char *)mem) + i);
}