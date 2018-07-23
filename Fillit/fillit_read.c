/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_read.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenache <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:21:51 by aenache           #+#    #+#             */
/*   Updated: 2018/01/22 16:21:59 by aenache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"

int	fillit_read(const char *file_name, char buffer[26][22], int *i)
{
	int		fd;
	int		ret;

	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (0);
	*i = 0;
	while ((ret = ft_read_fd(fd, buffer[*i], 21)))
	{
		if (ret == 20)
		{
			buffer[*i][20] = '\n';
			buffer[*i][21] = '0';
			(*i)++;
			return (1);
		}
		buffer[*i][21] = 0;
		(*i)++;
	}
	return (0);
}
