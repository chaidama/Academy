/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:13 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_dlist_add_after(t_dlist *node, t_dlist *new_node)
{
	t_dlist *next;

	next = NULL;
	if (!new_node || !node)
		return ;
	next = node->next;
	node->next = new_node;
	new_node->prev = node;
	new_node->next = next;
	if (next)
		next->prev = new_node;
}
