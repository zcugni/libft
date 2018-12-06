# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcugni <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 09:53:59 by zcugni            #+#    #+#              #
#    Updated: 2017/11/20 09:50:33 by zcugni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Werror -Wextra
HEADER_PATH = .

SRCS_STR =	ft_strcat.c ft_strdup.c ft_strncmp.c ft_strstr.c ft_strcpy.c \
			ft_strncat.c ft_strrchr.c ft_strncpy.c ft_strnew.c ft_strdel.c \
			ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
			ft_strequ.c ft_strnequ.c ft_strtrim.c ft_strsplit.c  ft_strcmp.c \
			ft_strlen.c ft_strnstr.c ft_toupper.c ft_tolower.c ft_strchri.c \
			ft_strchr.c ft_strlcat.c m_strndup.c m_strsplit_white.c \
			m_strsub.c m_strjoin.c 

SRCS_LST =	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstdelone.c m_lstcpy.c \
			m_lstnew.c m_lstdel.c m_lstappend.c m_lst_to_str.c m_lstlen.c \
			m_lstpop.c m_bubble_sort_lst.c

SRCS_TREE = compare_index.c find_in_tree.c insert_rbt.c new_rbt_node.c \
			rotate.c display_tree_id.c rbt_clear.c

SRCS_MEM =	ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memccpy.c \
			ft_memcpy.c ft_bzero.c ft_memset.c m_memdel.c m_get_leaks.c \

SRCS_IO =	ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c get_next_line.c \
			m_exit_error.c

SRCS_FTPRINTF = convert_nb.c convert_string.c convert_all.c flag.c ft_printf.c \
				get_info.c misc.c pad_precision.c pad_width.c

SRCS_MISC = ft_isalnum.c ft_isprint.c ft_isalpha.c ft_atoi.c ft_isascii.c \
			ft_isdigit.c ft_itoa.c ft_iswhitespace.c m_pow.c m_itoa_base.c \
			 m_atoi_harsh.c

SRCS = $(SRCS_STR) $(SRCS_LST) $(SRCS_IO) $(SRCS_MEM) $(SRCS_FTPRINTF) $(SRCS_MISC) $(SRCS_TREE)

OBJS = $(SRCS:%.c=objs/%.o)

objs/%.o : srcs/str/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/lst/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/io/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/mem/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/ft_printf/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/misc/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

objs/%.o : srcs/tree/%.c
	@mkdir -p objs
	@echo "compilation : " $*
	@gcc $(FLAGS) -c $^ -o $@ -I$(HEADER_PATH)

$(NAME): $(OBJS) libft.h
	@echo "compilation : " $(NAME)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@echo "suppression..."
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
