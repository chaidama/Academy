/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:23:09 by chaidama          #+#    #+#             */
/*   Updated: 2018/07/07 14:23:12 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *as)
{
	while (*as)
	{
		*as = 0;
		as++;
	}
}