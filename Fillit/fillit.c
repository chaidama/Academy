/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:20:32 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:20:46 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_piece(t_piece piece)
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_putbin(piece.desc[i]);
		ft_putstr("\n");
		i++;
	}
}

void	print_platform(int platform[])
{
	int i;

	i = 0;
	while (i < 24)
	{
		ft_putbin(platform[i]);
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char	buffer[26][22];
	int		block_count;

	if (argc != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!(fillit_read(argv[1], buffer, &block_count)))
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!fillit_fix(buffer, block_count))
	{
		ft_putstr("error\n");
		return (0);
	}
	solve(buffer, block_count);
	return (0);
}
