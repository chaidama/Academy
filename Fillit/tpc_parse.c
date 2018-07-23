/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tpc_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 18:44:46 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/31 18:49:32 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tpc	tpc_parse(char *s)
{
	t_pointc	rl;
	t_tpc		np;
	char		*i;

	np = INL_TPC_INIT;
	rl = INL_POINTC_INIT;
	i = np.os;
	while (i < (np.os + 8) && *s)
	{
		if (*s == '\n' && i != np.os)
		{
			rl.x -= 5;
			rl.y++;
		}
		if (*s++ == '#')
		{
			i[0] = rl.x;
			i[1] = rl.y;
			rl = INL_POINTC_INIT;
			i += 2;
		}
		if (i != np.os)
			rl.x++;
	}
	return (np);
}
