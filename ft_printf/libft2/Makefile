# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 18:20:21 by snagulap          #+#    #+#              #
#    Updated: 2022/12/29 20:34:53 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS			=	ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c\
					ft_memcpy.c ft_strlen.c ft_tolower.c\
					ft_toupper.c ft_strlcpy.c ft_strlcat.c ft_bzero.c\
					ft_strchr.c ft_strncmp.c ft_memmove.c ft_isprint.c\
					ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
					ft_calloc.c ft_memset.c ft_strdup.c ft_substr.c\
					ft_strjoin.c ft_atoi.c ft_itoa.c ft_putchar_fd.c\
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_strtrim.c ft_strmapi.c ft_split.c ft_striteri.c
OBJS=$(SRCS:.c=.o)

CC=gcc

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re