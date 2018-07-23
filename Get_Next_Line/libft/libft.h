/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 14:02:40 by chaidama          #+#    #+#             */
/*   Updated: 2018/03/08 14:02:42 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t		ft_strlen(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *s, int c);
void		ft_memdel(void **ap);
char		*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
