NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC =	ft_printf.c \
		p_int.c \
		p_hex.c \
		p_str.c \
		p_ptr.c \
		p_unsigned.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
