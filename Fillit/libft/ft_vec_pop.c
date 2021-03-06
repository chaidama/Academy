/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:34:52 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:35:08 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_pop(t_vector *v, void *store)
{
	ft_memmove(store, v->data + (v->count - 1) * v->step, v->step);
	(v->count)--;
}
