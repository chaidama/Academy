/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:08:07 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:08:08 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_delete_last(t_node **lst_head)
{
	t_node	*tmp;
	t_node	*second_tmp;
	int		deleted_value;

	tmp = *lst_head;
	if ((*lst_head)->next == NULL)
	{
		deleted_value = (*lst_head)->data;
		free(lst_head);
		lst_head = NULL;
	}
	else
	{
		while (tmp->next != NULL)
		{
			second_tmp = tmp;
			tmp = tmp->next;
		}
		deleted_value = tmp->data;
		free(second_tmp->next);
		second_tmp->next = NULL;
	}
	return (deleted_value);
}
