NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft.a
LIBFT_DIR = libft

SOURCE = ft_printf.c \
	 ft_write_escape.c \
	 ft_write_c.c \
	 ft_write_s.c \
	 ft_write_p.c \
	 ft_write_d.c \
	 ft_write_i.c \
	 ft_write_u.c \
	 ft_set_str_hex_num.c \

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
	rm -f $(LIBFT)
	$(MAKE) -C $(LIBFT_DIR) fclean --silent

re: fclean all

test: re	
	$(MAKE) -C ../Test/Printf test --silent

tclean: fclean
	$(MAKE) -C ../Test/Printf tclean --silent

.DEFAULT_GOAL := all

.PHONY: all clean fclean re test tclean
.SILENT:
