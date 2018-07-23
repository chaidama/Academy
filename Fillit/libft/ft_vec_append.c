/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:31:37 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 21:03:55 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_append(t_vector *v, void *data)
{
	if (v->count >= v->size)
		ft_vec_resize(v, v->size * 2);
	ft_memmove(v->data + v->count * v->step, data, v->step);
	v->count++;
}
