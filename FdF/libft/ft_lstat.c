/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:17:33 by chaidama          #+#    #+#             */
/*   Updated: 2018/07/07 14:17:36 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t val)
{
	size_t i;

	i = 0;
	while (i < val && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}