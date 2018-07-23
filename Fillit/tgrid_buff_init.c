/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_buff_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:44:11 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/31 18:48:41 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*tgrid_buff_init(int size)
{
	char	*iter;
	char	*buff;

	buff = ft_strnew(size * size + size);
	iter = buff;
	if (buff)
	{
		ft_memset(buff, '.', size * size + size);
		while (*iter)
		{
			iter += size;
			*iter = '\n';
			iter++;
		}
	}
	return (buff);
}
