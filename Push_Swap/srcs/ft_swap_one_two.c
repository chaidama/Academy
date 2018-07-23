/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_one_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:14:00 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:14:03 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_one_two(t_node **lst_head)
{
	if ((*lst_head != NULL) && ((*lst_head)->next != NULL))
		ft_swap(&((*lst_head)->data), &((*lst_head)->next->data));
}
