# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: henolimp <henolimp@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/19 16:46:27 by henolimp      #+#    #+#                  #
#    Updated: 2022/11/03 17:20:06 by henolimp      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME=libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRC = ft_atoi.c\
    ft_bzero.c \
    ft_calloc.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_memcmp.c \
	ft_memchr.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_strchr.c \
    ft_strdup.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_tolower.c \
    ft_toupper.c \
	ft_substr.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strjoin.c \
	ft_itoa.c \
	ft_strtrim.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_split.c \

OBJS = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

re: fclean all

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
.PHONY: all clean fclean re bonus

