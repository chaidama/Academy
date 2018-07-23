/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:17:10 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:17:11 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlst(t_list **head)
{
	t_list *node;

	node = *head;
	while (node)
	{
		ft_putstr((char *)node->content);
		ft_putchar('\n');
		node = node->next;
	}
}
