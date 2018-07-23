/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:33:37 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:33:47 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vec_move(t_vector *v)
{
	t_vector	*new_vec;

	new_vec = ft_memalloc(sizeof(t_vector));
	new_vec->step = v->step;
	new_vec->size = v->size;
	new_vec->count = v->count;
	new_vec->data = v->data;
	v->size = T_VECTOR_INIT_SIZE;
	v->count = 0;
	v->data = ft_memalloc(v->step * v->size);
	return (new_vec);
}
