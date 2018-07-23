/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:55:45 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:55:46 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin3(char *s1, char *s2, char *s3)
{
	char *new;

	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3));
	new = ft_strcat(ft_strcat(ft_strcpy(new, s1), s2), s3);
	return (new);
}
