# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 12:43:21 by snagulap          #+#    #+#              #
#    Updated: 2023/04/24 14:08:01 by snagulap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c\
		ft_printdec.c\
		ft_printstr.c\
		ft_printhex.c

OBJS = $(SRCS:.c=.o)
	
CC = cc
CFLAGS = -Werror -Wall -Wextra 

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft2
	mv libft2/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(SRCS) -c
	
clean:
	make clean -C libft2
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft2
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re 

