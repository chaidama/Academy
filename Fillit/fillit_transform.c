/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_transform.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:23:01 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:23:04 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	fillit_trans(char *piece)
{
	t_piece	new_piece;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		new_piece.desc[i] = 0;
		j = 0;
		while (j < 4)
		{
			new_piece.desc[i] = (piece[5 * i + j] == '#') << j |
				new_piece.desc[i];
			j++;
		}
		i++;
	}
	return (new_piece);
}

int		lsb_index(int number)
{
	int i;

	i = 0;
	while ((number & 1) == 0 && number)
	{
		i++;
		number >>= 1;
	}
	return (i);
}

int		msb_index(int number)
{
	int i;

	i = 0;
	while (number)
	{
		i++;
		number >>= 1;
	}
	return (i);
}
