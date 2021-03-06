/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_is_revsorted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:09:24 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:09:25 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_lst_is_revsorted(t_node *list)
{
	t_node *temp;

	temp = list;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			return (-1);
		temp = temp->next;
	}
	return (1);
}
