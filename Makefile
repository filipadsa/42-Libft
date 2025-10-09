CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I
SRC_DIR = .
SRC = %.c
OBJ = $(addprefix $(SRC_DIR)/, $(SRC:.c=.o))
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
