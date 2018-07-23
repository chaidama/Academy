# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chaidama <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/09 18:20:49 by chaidama          #+#    #+#              #
#    Updated: 2017/12/09 18:31:01 by chaidama         ###   ########.fr        #
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
