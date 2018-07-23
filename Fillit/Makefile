# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaidama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/31 18:34:44 by chaidama          #+#    #+#              #
#    Updated: 2018/01/31 18:54:21 by chaidama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SOURCES = tgrid_place.c\
		  tgrid_init.c\
		  tgrid_buff_init.c\
		  tgrid_read_pieces.c\
		  tgrid_resize.c\
		  tgrid_solve.c\
		  tgrid_unplace.c\
		  tgrid_validate_pieces.c\
		  tpc_parse.c
INCLUDES = libft
LIBS_DIR = libft
LIBS = ft

all:$(NAME)
	$(NAME):
	make -C libft
	gcc $(SOURCES) -Wall -Wextra -Werror -o $(NAME) -L$(LIBS_DIR) -l$(LIBS) -l$(INCLUDES)

re: fclean all

clean:
	make -C libft clean

fclean:
	make -C libft fclean
	rn -f $(NAME)
