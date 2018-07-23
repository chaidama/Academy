/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:08:26 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:08:27 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index_value(t_node *stack, int nb)
{
	t_node	*tmp;
	int		index;

	tmp = stack;
	index = 0;
	if (tmp->data == nb)
		return (0);
	while (tmp != NULL && tmp->data != nb)
	{
		tmp = tmp->next;
		index++;
	}
	if (index > ft_lst_len(stack) / 2)
		index = ft_lst_len(stack) - index;
	return (index);
}
