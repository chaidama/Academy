/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:21:02 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:21:07 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>

typedef struct	s_piece
{
	int	desc[4];
	int i;
	int j;
	int id;
}				t_piece;

typedef struct	s_2_ints
{
	int x;
	int y;
}				t_2_ints;

int				fillit_read(const char *file_name, char buffer[26][22],
		int *i);
int				fillit_fix(char b[26][22], int count);
t_piece			fillit_trans(char *piece);
int				lsb_index(int number);
int				msb_index(int number);
void			solve(char buffer[26][22], int count);
void			print_sol(t_piece s[], int piece_count);

#endif
