/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_is_over.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:09:11 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:09:12 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lst_is_over(t_node *list, int limit)
{
	t_node	*temp;
	int		index;

	temp = list;
	index = 0;
	while (temp != NULL)
	{
		if (temp->data >= limit)
			return (index);
		index++;
		temp = temp->next;
	}
	return (-1);
}
