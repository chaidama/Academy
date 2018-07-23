/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:12:31 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:12:33 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_front(t_node **lst_head, int number)
{
	t_node	*new_node;

	if (lst_head == NULL)
	{
		if (!(new_node = (t_node*)ft_memalloc(sizeof(t_node))))
			exit(-1);
		new_node->data = number;
		new_node->next = NULL;
	}
	else
	{
		if (!(new_node = (t_node*)ft_memalloc(sizeof(t_node))))
			exit(-1);
		new_node->data = number;
		new_node->next = *lst_head;
		*lst_head = new_node;
	}
	return (1);
}
