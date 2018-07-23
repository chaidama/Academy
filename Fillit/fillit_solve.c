/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_solve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:22:18 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:22:22 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		can_place(t_piece *piece, t_2_ints xy, int field[], int size)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (field[i + xy.x] & (piece->desc[i] << xy.y))
			return (0);
		if (i + xy.x >= size && msb_index(piece->desc[i]))
			return (0);
		if ((piece->desc[i] << xy.y) & ~((1 << (size)) - 1))
			return (0);
		i++;
	}
	return (1);
}

void	place2(t_piece *piece, int x, int y, int field[])
{
	int i;

	i = 0;
	while (i < 4)
	{
		field[i + x] |= piece->desc[i] << y;
		i++;
	}
}

void	unplace2(t_piece *piece, int x, int y, int field[])
{
	int i;

	i = 0;
	while (i < 4)
	{
		field[i + x] &= ~(piece->desc[i] << y);
		i++;
	}
}

int		rec2(t_piece pieces[], t_2_ints asd, int field[], int field_size)
{
	t_2_ints xy;

	if (!(xy.x = 0) && asd.x == asd.y)
		return (1);
	while (xy.x < field_size)
	{
		xy.y = 0;
		while (xy.y < field_size)
		{
			if (can_place(&pieces[asd.x], xy, field, field_size))
			{
				place2(&pieces[asd.x], xy.x, xy.y, field);
				pieces[asd.x].i = xy.x;
				pieces[asd.x].j = xy.y;
				pieces[asd.x].id = asd.x;
				if ((asd.x++ | 1) && rec2(pieces, asd, field, field_size))
					return (1);
				asd.x--;
				unplace2(&pieces[asd.x], xy.x, xy.y, field);
			}
			xy.y++;
		}
		xy.x++;
	}
	return (0);
}

void	solve(char buffer[26][22], int count)
{
	t_piece		pieces[26];
	int			i;
	int			platform[24];
	int			sol;
	t_2_ints	count_zero;

	sol = 1;
	while ((sol) * (sol) < count * 4)
		sol++;
	i = 0;
	while (i < count)
	{
		pieces[i] = fillit_trans(buffer[i]);
		i++;
	}
	i = 0;
	while (i < 24)
		platform[i++] = 0;
	count_zero.x = 0;
	count_zero.y = count;
	while (!rec2(pieces, count_zero, platform, sol))
		sol++;
	print_sol(pieces, count);
}
