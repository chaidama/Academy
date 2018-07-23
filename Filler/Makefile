# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaidama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 14:45:17 by chaidama          #+#    #+#              #
#    Updated: 2018/07/07 14:45:19 by chaidama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = resources/players/lcharvol.filler

SRCS := srcs/main.c 
SRCS +=	srcs/tools.c 
SRCS +=	srcs/tools2.c 
SRCS +=	srcs/ft_parcing.c 
SRCS +=	srcs/play.c 
SRCS +=	srcs/play2.c 

FLAGS = -Wall -Werror -Wextra -I./includes

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	make -C visualisateur
	gcc -o $(NAME) $(FLAGS) $(OBJ) libft/libft.a
	echo "Filler done"

clean:
	make clean -C libft
	make clean -C visualisateur
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	make fclean -C visualisateur
	rm -f $(NAME)

re: fclean all
