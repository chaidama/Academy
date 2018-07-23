/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:33:26 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:33:28 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		ft_power_for_ltoa(long nb, long power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

char			*ft_ltoa(long nb)
{
	int		length;
	char	*result;
	int		i;
	long	sign;

	length = 1;
	if ((sign = nb) < 0)
		nb = -nb;
	while (ft_power_for_ltoa(10, length) < nb)
		length++;
	if (!(result = (char*)malloc(length + 1)))
		return (NULL);
	i = 1;
	result[0] = (nb % 10) + 48;
	while ((nb /= 10) > 0)
		result[i++] = (nb % 10) + 48;
	if (sign < 0)
		result[i++] = '-';
	result[i] = '\0';
	return (ft_strrev(result));
}
