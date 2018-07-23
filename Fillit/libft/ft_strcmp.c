/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:33:36 by chaidama          #+#    #+#             */
/*   Updated: 2017/12/10 18:13:35 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*t1;
	unsigned char	*t2;

	i = 0;
	t1 = (unsigned char*)s1;
	t2 = (unsigned char*)s2;
	while (!(t1[i] == '\0' && t2[i] == '\0'))
	{
		if (t1[i] > t2[i] || t1[i] < t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
