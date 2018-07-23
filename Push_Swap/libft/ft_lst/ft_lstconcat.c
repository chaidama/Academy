/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:27:44 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:27:45 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstconcat(t_list *lnk_first_list, t_list *head_second_list)
{
	if (lnk_first_list && head_second_list)
	{
		while (lnk_first_list->next)
			lnk_first_list = lnk_first_list->next;
		lnk_first_list->next = head_second_list;
	}
}
