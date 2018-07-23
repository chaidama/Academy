/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_before.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:13 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_dlist_add_before(t_dlist *node, t_dlist *new_node)
{
	t_dlist	*prev;

	prev = NULL;
	if (!new_node || !node)
		return ;
	prev = node->prev;
	node->prev = new_node;
	new_node->next = node;
	new_node->prev = prev;
	if (prev)
		prev->next = new_node;
}
