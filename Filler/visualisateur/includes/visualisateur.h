/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualisateur.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:17:56 by chaidama          #+#    #+#             */
/*   Updated: 2018/07/07 15:17:59 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISUALISATEUR_H
# define VISUALISATEUR_H

# include "../../includes/filler.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "../../libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# define WIDTH 1200
# define HEIGHT 600
# define ECHAP	53

typedef struct		s_env
{
	char			*p1;
	char			*p2;
	float			scorep1;
	float			scorep2;
	char			**map;
	int				h;
	int				l;
	int				r;
	int				v;
	int				b;
	int				map_size_x;
	int				map_size_y;
	char			*ret;
	void			*ret2;
	void			*win;
	void			*mlx;
	void			*img;
	void			*img2;
	int				bits_per_pixel;
	int				size_line;
	int				endian;
	int				pause;
}					t_env;

void				ft_modif_color(int r, int v, int b, t_env *p);
void				ft_draw_score(t_env *p);
void				ft_calc_score(t_env *p);
void				ft_draw_rectangle(int start_x, int start_y, t_env *p);
void				ft_draw(t_env *p);
int					ft_is_number(char c);
void				ft_print_final(t_env *p);
void				ft_draw_title(t_env *p);
void				ft_draw_score(t_env *p);
int					ft_is_number(char c);
void				ft_get_map_size(char *line, t_env *p);
void				ft_read_output(t_env *p);
void				ft_modif_color(int r, int v, int b, t_env *p);
void				ft_draw_square(int start_x, int start_y,
	int size, t_env *p);
void				ft_draw_background(t_env *p);
void				ft_draw_map(t_env *p);
void				ft_draw_menu(t_env *p);

#endif
