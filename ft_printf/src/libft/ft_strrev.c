/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:08:49 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/28 14:08:51 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int start;
	int end;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		ft_swap(str + start, str + end, sizeof(char));
		start++;
		end--;
	}
	return (str);
}
