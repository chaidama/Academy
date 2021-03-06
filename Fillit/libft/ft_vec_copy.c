/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:32:45 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:32:53 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vec_copy(t_vector *v)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = v->step;
	new_vec->size = v->size;
	new_vec->count = v->count;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	ft_memcpy(new_vec->data, v->data, new_vec->step * new_vec->count);
	return (new_vec);
}
