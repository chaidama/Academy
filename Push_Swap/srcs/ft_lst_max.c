/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:10:22 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:10:27 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lst_max(t_node *lst)
{
	t_node	*temp;
	int		max;

	temp = lst;
	max = -2147483648;
	while (temp != NULL)
	{
		max = temp->data > max ? temp->data : max;
		temp = temp->next;
	}
	return (max);
}
