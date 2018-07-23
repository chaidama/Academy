/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:26:33 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 15:26:35 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list *blist)
{
	int		i;
	t_list	*list;

	i = 0;
	if (blist)
	{
		list = blist;
		while (list)
		{
			i++;
			list = list->next;
		}
	}
	return (i);
}
