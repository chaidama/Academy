/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_add_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:13 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_dlist_add_end(t_dlist **end_node, t_dlist *new_node)
{
	new_node->prev = (*end_node);
	if (*end_node != NULL)
		(*end_node)->next = new_node;
	(*end_node) = new_node;
}
