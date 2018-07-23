/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:22:39 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:22:42 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillit_init_mat(char str[400])
{
	ft_strcpy(str, "###.\n..#.\n....\n....\n\n"
			"##..\n#...\n#...\n....\n\n"
			"#...\n###.\n....\n....\n\n"
			".#..\n.#..\n##..\n....\n\n"
			"#...\n#...\n##..\n....\n\n"
			"..#.\n###.\n....\n....\n\n"
			"##..\n.#..\n.#..\n....\n\n"
			"###.\n#...\n....\n....\n\n"
			"##..\n.##.\n....\n....\n\n"
			".#..\n##..\n#...\n....\n\n"
			"#...\n##..\n.#..\n....\n\n"
			".##.\n##..\n....\n....\n\n"
			"####\n....\n....\n....\n\n"
			"#...\n#...\n#...\n#...\n\n"
			".#..\n###.\n....\n....\n\n"
			"###.\n.#..\n....\n....\n\n"
			".#..\n##..\n.#..\n....\n\n"
			"#...\n##..\n#...\n....\n\n"
			"##..\n##..\n....\n....\n\n");
}

void	fillit_fix_up(char b[22])
{
	int i;
	int j;

	j = 0;
	while (b[0] == '.' && b[1] == '.' && b[2] == '.' && b[3] == '.' && j < 4)
	{
		j++;
		i = 0;
		while (i < 15)
		{
			b[i] = b[i + 5];
			i++;
		}
		i = 15;
		while (i < 19)
			b[i++] = '.';
	}
}

void	fillit_fix_down(char b[22])
{
	int	i;
	int j;

	j = 0;
	while (b[0] == '.' && b[5] == '.' && b[10] == '.' && b[15] == '.' && j < 4)
	{
		j++;
		i = 0;
		while (i < 3)
		{
			b[i] = b[i + 1];
			b[5 + i] = b[5 + i + 1];
			b[5 + 5 + i] = b[5 + 5 + i + 1];
			b[5 + 5 + 5 + i] = b[5 + 5 + 5 + i + 1];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			b[5 * i + 3] = '.';
			i++;
		}
	}
}

int		fillit_fix(char b[26][22], int count)
{
	int		i;
	int		j;
	char	checker[400];
	char	is_good;

	i = 0;
	fillit_init_mat(checker);
	while (i < count)
	{
		is_good = 'F';
		fillit_fix_up(b[i]);
		fillit_fix_down(b[i]);
		j = 0;
		while (j < 19)
			if (!ft_strncmp(checker + 21 * (j++), b[i], 21))
				is_good = 'T';
		if (is_good == 'F')
			return (0);
		i++;
	}
	return (1);
}
