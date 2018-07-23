/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_newn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:34:23 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:34:32 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	*ft_vec_newn(size_t step, size_t init_size)
{
	t_vector	*new_vec;

	new_vec = (t_vector *)ft_memalloc(sizeof(t_vector));
	new_vec->step = step;
	new_vec->size = init_size;
	new_vec->count = 0;
	new_vec->data = ft_memalloc(new_vec->size * new_vec->step);
	return (new_vec);
}
