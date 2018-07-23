/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tgrid_resize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:45:09 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/31 18:49:58 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	tgrid_resize(t_tgrid *tg, int nsize)
{
	char	*newbuff;

	newbuff = tgrid_buff_init(nsize);
	ft_memdel((void **)&(tg->buff));
	tg->buff = newbuff;
	tg->size = nsize;
}
