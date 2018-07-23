/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:10:41 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:10:42 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lst_min(t_node *lst)
{
	t_node	*temp;
	int		min;

	temp = lst;
	min = 2147483647;
	while (temp != NULL)
	{
		min = temp->data < min ? temp->data : min;
		temp = temp->next;
	}
	return (min);
}
