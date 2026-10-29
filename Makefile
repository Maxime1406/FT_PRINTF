NAME = libftprintf.a

SRCS = ft_print_char.c \
	ft_print_hex_lower.c \
	ft_printf_hex_upper.c \
	ft_print_nbr.c \
	ft_print_percent.c \
	ft_print_ptr.c \
	ft_print_str.c \
	ft_print_unsigned.c \
	ft_printf.c \
	ft_putnbr_base.c 

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -g

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re