NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_printf.c \
	write.c

TEST = test_printf.c

OBJECTS = $(SOURCE:.c=.o)

TOBJECTS = $(TEST:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "$(NAME) has been created successfully!"

clean:
	@rm -f $(OBJECTS)

fclean:	clean
	@rm -f $(NAME)

re: fclean all

test: $(TOBJECTS)
	@$(CC) $(CFLAGS) -o test $(TOBJECTS) $(NAME)
	@./test

tclean: 
	@rm -f $(TOBJECTS)

.DEFAULT_GOAL := all
.PHONY: all clean fclean re test tclean
