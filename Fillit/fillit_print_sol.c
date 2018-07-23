/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_print_sol.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:21:29 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:21:37 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_sol_mat(char mat[20][20], int max)
{
	int i;
	int j;

	i = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			ft_putchar(mat[i][j]);
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

void	clear_sol_mat(char sol_mat[20][20], int *max, int *i)
{
	int	o;
	int	l;

	*max = 0;
	*i = 0;
	o = 0;
	l = 0;
	while (o < 20)
	{
		l = 0;
		while (l < 20)
		{
			sol_mat[o][l] = '.';
			l++;
		}
		o++;
	}
}

void	print_sol(t_piece s[], int piece_count)
{
	char	sol_mat[20][20];
	int		i;
	int		j;
	int		k;
	int		max;

	clear_sol_mat(sol_mat, &max, &k);
	while (k < piece_count && !(i = 0))
	{
		while (i < 4 && !(j = 0))
		{
			while (j < 4)
			{
				if (s[k].desc[i] & (1 << j))
					sol_mat[i + s[k].i][j + s[k].j] = 'A' + s[k].id;
				if (s[k].desc[i] & (1 << j))
					max = ft_max(ft_max(max, i + s[k].i + 1), j + s[k].j + 1);
				j++;
			}
			i++;
		}
		k++;
	}
	print_sol_mat(sol_mat, max);
}
