/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 14:00:39 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/08 14:00:42 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 99

# include "libft/libft.h"
# include <fcntl.h>

int						get_next_line(int const fd, char **line);

typedef struct			s_list_gnl
{
	int					fd;
	char				*temp;
	struct s_list_gnl	*next;
}						t_list_gnl;

#endif
