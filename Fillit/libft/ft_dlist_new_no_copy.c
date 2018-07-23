/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlist_new_no_copy.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:54 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:15 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_dlist	*ft_dlist_new_no_copy(void *content, size_t content_size)
{
	t_dlist *new_node;

	new_node = (t_dlist*)malloc(sizeof(t_dlist));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->content_size = (content == NULL) ? 0 : content_size;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}
