# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaidama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 15:18:54 by chaidama          #+#    #+#              #
#    Updated: 2018/07/07 15:18:57 by chaidama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = visualisateur

SRCS =	srcs/aff.c \
		srcs/parcing.c \
		srcs/main.c \
		srcs/other.c \
		srcs/other2.c \
	   

FLAGS = -Wall -Werror -Wextra -I./includes

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(FLAGS) $(OBJ) -L../includes/mlx/ -lmlx -framework OpenGL -framework AppKit ../libft/libft.a
	echo "visualisateur done"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
