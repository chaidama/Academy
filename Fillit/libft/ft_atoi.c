/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 21:08:46 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/19 21:08:50 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	long long	i;
	long long	s;
	long long	rez;

	i = 0;
	s = 1;
	rez = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		rez = rez * 10 + str[i] - '0';
		if (rez < 0 && (s == 1))
			return (-1);
		else if (rez < 0 && (s == -1))
			return (0);
		i++;
	}
	return (rez * s);
}
