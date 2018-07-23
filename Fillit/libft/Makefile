# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaidama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/16 20:26:55 by chaidama          #+#    #+#              #
#    Updated: 2018/01/31 18:46:31 by chaidama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror
all:	$(NAME)
	$(NAME):
	gcc $(FLAGS) -c ft_*.c
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)

clean:
	find . -name "*.o" -delete
	fclean: clean
	/bin/rm -f $(NAME)
	re: fclean all
