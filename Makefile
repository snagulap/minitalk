SERVER = server
CLIENT = client
NAME = libftprintf.a

SRCSC = client.c
SRCSS = server.c
OBJSC = $(SRCSC:.c=.o)
OBJSS = $(SRCSS:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra

all: $(NAME) $(SERVER) $(CLIENT)

$(NAME):
	make -C ft_printf

$(SERVER): $(OBJSS)
	$(CC) $(FLAGS) $(OBJSS) ft_printf/$(NAME) -o $(SERVER)

$(CLIENT): $(OBJSC)
	$(CC) $(FLAGS) $(OBJSC) ft_printf/$(NAME) -o $(CLIENT)

%.o: %.c
	$(CC) $(FLAGS) $(SRCSC) -c
	$(CC) $(FLAGS) $(SRCSS) -c

clean:
	make clean -C ft_printf
	rm -f $(OBJSC) $(OBJSS)

fclean: clean
	make fclean -C ft_printf
	rm -f $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all fclean clean re 