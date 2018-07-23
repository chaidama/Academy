/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtataru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:32:02 by rtataru           #+#    #+#             */
/*   Updated: 2018/01/15 20:32:26 by rtataru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_read_line_fd(int fd, char *buff, int max)
{
	int i;

	i = 0;
	if (buff == NULL)
		return (-1);
	while (read(fd, &buff[i], 1) && i < max && buff[i] != '\n')
		i++;
	return (i);
}
