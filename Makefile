# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 17:09:28 by lsauvage          #+#    #+#              #
#    Updated: 2018/01/18 14:59:23 by lsauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

OPTION = -I $(HEADER)

SRC = 	ft_abs.c				\
		ft_atoi.c				\
		ft_bzero.c				\
		ft_int_len.c			\
		ft_is_prime.c			\
		ft_isalnum.c			\
		ft_isalpha.c			\
		ft_isascii.c			\
		ft_isblank.c			\
		ft_iscntrl.c			\
		ft_isdigit.c			\
		ft_isgraph.c			\
		ft_islower.c			\
		ft_isprint.c			\
		ft_isspace.c			\
		ft_isupper.c			\
		ft_isxdigit.c			\
		ft_itoa.c				\
		ft_lstadd.c				\
		ft_lstat.c				\
		ft_lstcount.c			\
		ft_lstdel.c				\
		ft_lstdelone.c			\
		ft_lstiter.c			\
		ft_lstmap.c				\
		ft_lstnew.c				\
		ft_lstrev.c				\
		ft_max.c				\
		ft_memalloc.c			\
		ft_memccpy.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_memcpy.c				\
		ft_memdel.c				\
		ft_memmove.c			\
		ft_memset.c				\
		ft_min.c				\
		ft_next_prime.c			\
		ft_putchar.c			\
		ft_putchar_fd.c			\
		ft_putendl.c			\
		ft_putendl_fd.c			\
		ft_putnbr.c				\
		ft_putnbr_fd.c			\
		ft_putstr.c				\
		ft_putstr_fd.c			\
		ft_str_is_alpha.c		\
		ft_str_is_lowercase.c	\
		ft_str_is_numeric.c		\
		ft_str_is_printable.c	\
		ft_str_is_uppercase.c	\
		ft_strcapitalize.c		\
		ft_strcat.c				\
		ft_strchr.c				\
		ft_strclr.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strdel.c				\
		ft_strdup.c				\
		ft_strequ.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strjoin.c			\
		ft_strlcat.c			\
		ft_strlen.c				\
		ft_strmap.c				\
		ft_strmapi.c			\
		ft_strncat.c			\
		ft_strncmp.c			\
		ft_strncpy.c			\
		ft_strnequ.c			\
		ft_strnew.c				\
		ft_strnstr.c			\
		ft_strrchr.c			\
		ft_strstr.c				\
		ft_strsplit.c			\
		ft_strsub.c				\
		ft_strtrim.c			\
		ft_swap.c				\
		ft_tolower.c			\
		ft_toupper.c			\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[33m...creating archive...\033[0m"
	@ar rc $(NAME) $(OBJ)
	@echo "\033[33m...generating index... \033[0m"
	@ranlib $(NAME)
	@echo "\033[32m[OK]libft is ready\033[0m"

$(OBJ):
	@echo "\033[33m...compiling sources...\033[0m"
	@$(CC) $(FLAGS) $(OPTION) -c $(SRC)

clean:
	@echo "\033[33m...removing object files... \033[0m"
	@/bin/rm -f $(OBJ)
	@echo "\033[32m[OK]\033[0m \033[33mall .o files are removed\033[0m"

fclean: clean
	@echo "\033[33m...removing Library... \033[0m"
	@/bin/rm -f $(NAME)
	@echo "\033[32m[OK]\033[0m \033[31m$(NAME) is deleted\033[0m"

re: fclean all

.PHONY: all clean fclean re
