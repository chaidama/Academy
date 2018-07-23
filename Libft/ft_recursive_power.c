/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:09:13 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/19 21:09:15 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int rez;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	rez = nb * ft_recursive_power(nb, power - 1);
	return (rez);
}
