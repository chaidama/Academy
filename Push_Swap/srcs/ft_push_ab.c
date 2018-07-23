/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:12:13 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:12:14 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push_ab(t_node **stack_one, t_node **stack_two)
{
	int val_to_move;

	val_to_move = -1;
	if (*stack_one != NULL)
	{
		val_to_move = ft_delete_first(&(*stack_one));
		if (ft_push_front(&(*stack_two), val_to_move) == -1)
			return (-1);
	}
	return (1);
}
