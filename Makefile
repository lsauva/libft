# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/29 17:09:28 by lsauvage          #+#    #+#              #
#    Updated: 2018/09/20 15:07:23 by lsauvage         ###   ########.fr        #
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
		ft_lstadd_end.c			\
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
		ft_strlen_bitwise.c		\
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
		get_next_line.c			\

OBJ = $(SRC:.c=.o)

.SILENT:

# Text Colors Red Green Yellow Blue Purple Cyan White
_BLACK=\x1b[30m
_R=\x1b[31m
_G=\x1b[32m
_Y=\x1b[33m
_B=\x1b[34m
_P=\x1b[35m
_C=\x1b[36m
_W=\x1b[37m

# Background Colors B = Back
_B_BLACK=\x1b[40m
_BR=\x1b[41m
_BG=\x1b[42m
_BY=\x1b[43m
_BB=\x1b[44m
_BP=\x1b[45m
_BC=\x1b[46m
_BW=\x1b[47m

# End tag
_E=\x1b[0m

all: $(NAME)

$(NAME): $(OBJ)
	echo "$(_C)...creating archive...$(_E)"
	ar rc $(NAME) $(OBJ)
	echo "$(_C)...generating index... $(_E)"
	ranlib $(NAME)
	echo "[$(_G) OK $(_E)] $(_BG) libft is ready $(_E)"
	echo "\n"
	echo "$(_G)  ___       ___  ________  ________ _________   $(_E)"
	echo "$(_G) |\  \     |\  \|\   __  \|\  _____\\___   ___\ $(_E)"
	echo "$(_G) \ \  \    \ \  \ \  \|\ /\ \  \__/\|___ \  \_| $(_E)"
	echo "$(_G)  \ \  \    \ \  \ \   __  \ \   __\    \ \  \  $(_E)"
	echo "$(_G)   \ \  \____\ \  \ \  \|\  \ \  \_|     \ \  \ $(_E)"
	echo "$(_G)    \ \_______\ \__\ \_______\ \__\       \ \__\$(_E)"
	echo "$(_G)     \|_______|\|__|\|_______|\|__|        \|__|$(_E)"
	echo "\n"

$(OBJ):
	$(CC) $(FLAGS) $(OPTION) -c $(SRC)

clean:
	echo "$(_Y)...removing object files... $(_E)"
	/bin/rm -f $(OBJ)
	echo "[$(_G) OK $(_E)] $(_R)all .o files are removed$(_E)"

norme:
	norminette -R CheckForbiddenSourceHeader $(SRC)

fclean: clean
	echo "$(_Y)...removing Library... $(_E)"
	/bin/rm -f $(NAME)
	echo "[$(_G) OK $(_E)] $(_R)$(NAME) is deleted$(_E)"

re: fclean all

.PHONY: all clean norme fclean re
