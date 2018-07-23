/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_nocopy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:31:56 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:20 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstnew_nocopy(void *content, size_t content_size)
{
	t_list *new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = (t_list*)malloc(sizeof(t_list));
	new_node->content_size = (content == NULL) ? 0 : content_size;
	new_node->next = NULL;
	return (new_node);
}
