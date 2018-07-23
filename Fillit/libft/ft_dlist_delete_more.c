/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_delete_more.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:13 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_dlist_delete_more(t_dlist **node, void (*del)(void *, size_t))
{
	t_dlist *next_node;

	if ((*node) == NULL)
		return ;
	next_node = (*node)->next;
	ft_dlist_delete(node, del);
	ft_dlist_delete_more(&next_node, del);
}
