/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:43:01 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/11 16:24:07 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *p;
	t_list *q;

	q = NULL;
	p = f(lst);
	q = p;
	while (lst->next)
	{
		p->next = f(lst->next);
		p = p->next;
		lst = lst->next;
	}
	return (q);
}
