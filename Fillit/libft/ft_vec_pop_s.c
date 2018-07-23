/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_pop_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 20:35:28 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 20:35:36 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vec_pop_s(t_vector *v, void *store)
{
	ft_memmove(store, v->data + (v->count - 1) * v->step, v->step);
	ft_bzero(v->data + (v->count - 1) * v->step, v->step);
	(v->count)--;
}
