# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: deremia <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/15 13:09:43 by deremia           #+#    #+#              #
#    Updated: 2018/03/28 13:57:16 by chaidama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS += -Wall -Wextra -Werror
CFLAGS += -I includes/

FILES = ft_printf.c \
		ft_vector.c \
		ft_handle_spec.c \
		ft_fmt_parse.c \
		ft_num_conv.c \
		ft_pfhandle.c \
		ft_chr_conv.c \
		ft_str_conv.c \
		ft_wstr_conv.c \
		ft_xou_conv.c \
		ft_float_conv.c \
		ft_pfbonus.c

LIBFILES =	ft_strlen.c \
			ft_strdup.c \
			ft_strndup.c \
			ft_strnew.c \
			ft_strchr.c \
			ft_memalloc.c \
			ft_memcpy.c \
			ft_recalloc.c \
			ft_strcpy.c \
			ft_uimaxtoa_base.c \
			ft_memset.c \
			ft_imaxtoa.c \
			ft_strcmp.c \
			ft_memmove.c \
			ft_insrt_to_str.c \
			ft_findchr.c \
			ft_strncpy.c \
			ft_strnstr.c

.PHONY = all clean fclean clean re

PRINTFSRCS	= $(addprefix src/, $(FILES))
LIBSRCS	= $(addprefix src/libft/, $(LIBFILES))

OBJ = $(PRINTFSRCS:.c=.o)
LIBOBJ = $(LIBSRCS:.c=.o)

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

$(LIBOBJ): %.o: %.c
	@gcc -c $(CFLAGS) $< -o $@

$(NAME): $(LIBOBJ) $(OBJ)
	@ar rcs $(NAME) $(OBJ) $(LIBOBJ)
	@echo "\033[32mCreated libftprintf library\033[0m"

clean:
	@rm -rf $(OBJ) $(LIBOBJ)
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@echo "\033[32mRemoved Object files and library\033[0m"

re: fclean all
