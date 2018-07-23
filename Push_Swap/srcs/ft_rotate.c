/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:13:28 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:13:30 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_node **lst_head)
{
	t_node *lst;

	lst = *lst_head;
	if (*lst_head != NULL)
	{
		while (lst->next != NULL)
		{
			ft_swap(&(lst->data), &(lst->next->data));
			lst = lst->next;
		}
	}
}
