/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:16 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_dlist_swap(t_dlist *first, t_dlist *second)
{
	if (first == NULL || second == NULL)
		return ;
	first->next->prev = second;
	first->prev->next = second;
	second->prev->next = first;
	second->next->prev = first;
	ft_dlist_ptr_swap(&(first->next), &(second->next));
	ft_dlist_ptr_swap(&(first->prev), &(second->prev));
}
