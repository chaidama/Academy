/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:54:34 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:54:36 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strdel_array(char ***as)
{
	char	**tab;

	tab = *as;
	while (*tab)
	{
		free(*tab);
		*tab = NULL;
		tab++;
	}
	free(*as);
	*as = NULL;
}
