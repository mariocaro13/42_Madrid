NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft.a
LIBFT_DIR = libft

SOURCE = ft_printf.c \
	 ft_switch_format.c \
	 ft_putchar_count.c \
	 ft_putstr_count.c \
	 ft_putpointer_count.c \
	 ft_putnbr_in_base_x.c \

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) --silent
	cp $(LIBFT_DIR)/$(LIBFT) ./$(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
	echo "\033[0;32m$(NAME) has been created successfully!\033[0m"

clean:
	rm -f $(OBJECTS)
	$(MAKE) -C $(LIBFT_DIR) clean --silent

fclean:	clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean --silent

re: fclean all

test: re	
	$(MAKE) -C ../Test/ft_printf test --silent

tclean: fclean
	$(MAKE) -C ../Test/ft_printf tclean --silent

.DEFAULT_GOAL := all

.PHONY: all clean fclean re test tclean
.SILENT:
