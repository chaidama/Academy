/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:13 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_dlist_delete(t_dlist **node, void (*del)(void *, size_t))
{
	if (*node == NULL)
		return ;
	del((*node)->content, (*node)->content_size);
	if ((*node)->prev != NULL)
		(*node)->prev->next = (*node)->next;
	if ((*node)->next != NULL)
		(*node)->next->prev = (*node)->prev;
	free(*node);
	*node = NULL;
}
