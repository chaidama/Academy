/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 21:32:24 by chaidama          #+#    #+#             */
/*   Updated: 2018/01/16 21:33:39 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memrcpy(void *dst, const void *src, size_t n)
{
	t_byte		*m_ptr;
	t_byte		*v_ptr;

	m_ptr = (t_byte *)dst + n - 1;
	v_ptr = (t_byte *)src + n - 1;
	while (n)
	{
		*m_ptr = *v_ptr;
		--m_ptr;
		--v_ptr;
		--n;
	}
	return (dst);
}
